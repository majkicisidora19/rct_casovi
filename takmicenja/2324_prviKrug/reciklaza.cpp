#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<long long> a;
    vector<long long> c;

    long long pom;
    for(int i = 0; i < n; i++){
        cin >> pom;
        a.push_back(pom);
    }

    for(int i = 0; i < n; i++){
        cin >> pom;
        c.push_back(pom);
    }

    unsigned q;
    cin >> q;
    while(q--){
        unsigned i;
        long long x;
        cin >> i >> x;
        a[i-1] += x; // komisija krece od 1. clana
    }

    for(int i = 0; i < n-1; i++){
        if(a[i] > c[i]){
            a[i+1] += (a[i] - c[i]);
            a[i] = c[i];
        }
    }
    if(a[n-1] > c[n-1]) // moram i poslednjeg da proverim, mozda neke zalbe nigde ne stanu
        a[n-1] = c[n-1];

    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }

    return 0;
}