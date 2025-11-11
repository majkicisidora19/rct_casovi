#include <iostream>

using namespace std;

int main() {
    int n;    // zbir godina tri brata i sestre
    cin >> n;
    if ((n - 3) % 4 == 0)
      cout << "da" << endl;
    else
      cout << "ne" << endl;

    // kraci nacin preko uslovnog operatora
    // cout << ((n - 3) % 4 == 0 ? "da" : "ne") << endl;
    return 0;
}