#include <iostream>
using namespace std;

int fakt(int n){
    if(n == 0)
        return 1;
    
    return n * fakt(n-1);
}

int main(){

    int n;
    cin >> n;

    cout << fakt(n) << endl;
    return 0;
}