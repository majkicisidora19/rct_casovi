#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<unsigned> brojevi;
    unsigned pom;

    for(int i = 0; i < 7; i++){
        cin >> pom;
        brojevi.push_back(pom);
    }

    sort(brojevi.begin(), brojevi.end());

    cout << brojevi[0] << ' '
        << brojevi[1] << ' '
        << brojevi[6] - brojevi[0] - brojevi[1] << endl;
}