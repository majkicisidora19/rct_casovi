#include <iostream>

using namespace std;

int main() {
  int d1, m1, g1; // datum rodjenja
  int d2, m2, g2; // datum u kom se ispituje punoletstvo
  cin >> d1 >> m1 >> g1
      >> d2 >> m2 >> g2;
  if ((g2 > g1 + 18) ||
      (g2 == g1 + 18 && m2 > m1) ||
      (g2 == g1 + 18 && m2 == m1 && d2 >= d1))
    cout << "DA" << endl;
  else
    cout << "NE" << endl;
  return 0;
}