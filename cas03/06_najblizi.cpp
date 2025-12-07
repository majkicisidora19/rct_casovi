#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// provera da li je x1 bolja procena broja x nego broj x2
bool boljaProcena(double x1, double x2, double x) {
  if (abs(x1 - x) < abs(x2 - x))
    return true;
  if (abs(x1 - x) == abs(x2 - x) && x1 > x2)
    return true;
  return false;
}

int main() {
  double x;  // dati broj
  cin >> x;
  int n;     // broj elemenata serije
  cin >> n;
  double broj;  // ucitavamo prvi element serije
  cin >> broj;
  double najbliziBroj = broj; // proglasavamo ga za najblizi broju x
  for (int i = 1; i < n; i++) {  // za ostale elemente serije
    cin >> broj; // ucitavamo naredni element
    // ako je on bolja procena od trenutno najblizeg
    if (boljaProcena(broj, najbliziBroj, x))
      najbliziBroj = broj; // azuriramo trenutno najblizi broj
  }
  // prijavljujemo rezultat
  cout << fixed << setprecision(2) << najbliziBroj << endl;
  return 0;
}