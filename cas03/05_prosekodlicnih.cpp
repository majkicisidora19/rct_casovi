#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;     // ukupan broj ucenika
  cin >> n;
  // ucitavamo proseke svih ucenika i odredjujemo broj odlicnih ucenika
  // i zbir njihovih proseka
  double zbirProsekaOdlicnih = 0.0;
  int brojOdlicnih = 0;
  for (int i = 0; i < n; i++) {
    double tekuciProsek;
    cin >> tekuciProsek;
    if (tekuciProsek >= 4.5) {
      zbirProsekaOdlicnih += tekuciProsek;
      brojOdlicnih++;
    }
  }
  // odredjujemo i ispisujemo prosek proseka odlicnih ucenika
  if (brojOdlicnih != 0) {
    double prosekOdlicnih = zbirProsekaOdlicnih / brojOdlicnih;
    cout << fixed << setprecision(2) << showpoint
         << prosekOdlicnih << endl;
  } else
    cout << "-" << endl;
  return 0;
}