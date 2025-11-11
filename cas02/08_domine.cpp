#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int d11, d12, d21, d22;
  cin >> d11 >> d12 >> d21 >> d22;
  // odredjujemo vecu i manju cifru na prvoj domini
  int m11 = max(d11, d12), m12 = min(d11, d12);
  // odredjujemo vecu i manju cifru na drugoj domini
  int m21 = max(d21, d22), m22 = min(d21, d22);
  // odredjujemo bolji redosled domina leksikografskim poredjenjem parova
  // (m11, m12) i (m21, m22)
  if (m11 > m21 || (m11 == m21 && m12 > m22))
    cout << m11 << " " << m12 << " " << m21 << " " << m22 << endl;
  else
    cout << m21 << " " << m22 << " " << m11 << " " << m12 << endl;
  return 0;
}