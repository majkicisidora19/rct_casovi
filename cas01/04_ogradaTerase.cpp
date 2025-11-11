#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;        // broj stubica
  double d;     // duzina terase (u m)
  double s, r;  // sirina stubica i rastojanje izmedju stubica (u cm)
  cin >> d >> n >> s;
  r = (d * 100 - n * s) / (n + 1);
  cout << fixed << showpoint << setprecision(2) << r << endl;
  return 0;
}