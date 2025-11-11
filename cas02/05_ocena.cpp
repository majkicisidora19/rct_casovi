#include <iostream>

using namespace std;

int main(){
    int poeni;
    cin >> poeni;

    if(poeni < 51)
        cout << 5 << endl;
    else if (poeni < 61)
        cout << 6 << endl;
    else if (poeni < 71)
        cout << 7 << endl;
    else if (poeni < 81)
        cout << 8 << endl;
    else if (poeni < 91)
        cout << 9 << endl;
    else
        cout << 10 << endl;

    return 0;
}