#include <iostream>
using namespace std;

int broj_cifara(int n){
    if(n < 10)
        return 1;
    return 1 + broj_cifara(n/10);
}

int zbir_cifara(int n){
    if(n < 10)
        return n;
    return n%10 + zbir_cifara(n/10);
}

// int broj_i_zbir(int n, int* ptr_br, int* ptr_zbir){
//     if(n == 0)
//         return 1;
//     (*ptr_br) += 1;
//     (*ptr_zbir) += n%10;
//     return broj_i_zbir(n/10, ptr_br, ptr_zbir);
// }

int main(){

    int n;
    cin >> n;

    // int zbir = 0;
    // int broj = 0;
    // broj_i_zbir(n, &broj, &zbir);
    // cout << broj << " " << zbir << endl;

    cout << broj_cifara(n) << " " << zbir_cifara(n) << endl;
    return 0;
}