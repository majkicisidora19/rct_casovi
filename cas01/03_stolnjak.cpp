#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// const double PI = 3.14159265359;

int main() {
  double P, r, O;
  cin >> P;               // ucitavamo povrsinu
  r = sqrt(P / M_PI);     // izracunavamo poluprecnik
  O = 2 * r * M_PI;       // izracunavamo obim
  cout << fixed << showpoint << setprecision(2) << O << endl;
}