#include <iostream>

using namespace std;

int main() {
    int a, b, c;    // stranice trougla
    cin >> a >> b >> c;
    int obim = a + b + c;
    if (obim % 3 == 0)
        cout << "da" << endl << obim/3 << endl;
    else
      cout << "ne" << endl;

    return 0;
}