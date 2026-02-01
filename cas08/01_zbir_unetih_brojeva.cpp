#include <iostream>
using namespace std;

int zbir(int n){
    if(n == 0)
        return 0;
    
    int x;
    cin >> x; 
    return x + zbir(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << zbir(n) << endl;
    return 0;
}