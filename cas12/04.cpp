#include <iostream>
using namespace std;

// funkcija koja računa duzinu lanca
long long lanac(long long X) {
    if (X == 2) return 1;
    for (long long d = 2; d < X; d++) {
        if (X % d != 0) {
            return 1 + lanac(d);
        }
    }
    return 0; // ovo se u praksi nikad ne desi
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long zbir = 0;
    for (long long i = a; i <= b; i++) {
        zbir += lanac(i);
    }

    cout << zbir << endl;
    return 0;
}
