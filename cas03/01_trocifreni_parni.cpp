#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // ucitavamo interval [a, b]
  int a, b;
  cin >> a >> b;

  // odredjujemo presek sa intervalom [100, 999]
  int Od = max(a, 100), Do = min(b, 999);

  // osiguravamo da levi i desni kraj budu parni brojevi
  if (Od % 2 != 0)
    Od++;
  if (Do % 2 != 0)
    Do--;

  // vrsimo iteraciju i ispisujemo sve trazene brojeve
  for (int i = Od; i <= Do; i += 2)
    cout << i << endl;

  return 0;
}