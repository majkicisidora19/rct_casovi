#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int prefiks = n / 1000;
  int sufiks  = n % 100;
  cout << 100*prefiks + sufiks << endl;
  return 0;
}