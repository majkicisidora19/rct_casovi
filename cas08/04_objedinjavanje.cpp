#include <iostream>
#include <vector>

using namespace std;

void objedini(vector<int> &a, int i,
                vector<int> &b, int j, vector<int> &c){

    if(i == a.size() && j == b.size())
        return;
    if(i == a.size()){
        c.push_back(b[j]);
        objedini(a, i, b, j+1, c);
        return;
    }
    if(j == b.size()){
        c.push_back(a[i]);
        objedini(a, i+1, b, j, c);
        return;
    }
    if(a[i] > b[j]){
        c.push_back(b[j]);
        objedini(a, i, b, j+1, c);
        return;
    }
    else{
        c.push_back(a[i]);
        objedini(a, i+1, b, j, c);
        return;
    }

}

int main(){
    int na;
    cin >> na;
    vector<int> a(na);
    for(int i = 0; i < na; i++)
        cin >> a[i];

    int nb;
    cin >> nb;
    vector<int> b(nb);
    for(int i = 0; i < nb; i++)
        cin >> b[i];

    vector<int> c(0);
    objedini(a, 0, b, 0, c);

    for(int i = 0; i < na + nb; i++)
        cout << c[i] << " ";
}