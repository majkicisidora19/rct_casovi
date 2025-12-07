#include <iostream>

using namespace std;

int main() {
  int n;                       // broj clanova
  cin >> n;
  int prethodni, tekuci;       // dva uzastopna clana niza
  cin >> prethodni >> tekuci;  // ucitavamo prva dva clana
  // za sada nismo naisli na elemente ciji je odnos pogresan i za niz
  // mozemo reci da trenutno jeste testerast
  bool testerast = true;
  // ako je veci=true, tada naredni element treba da bude veci
  // od prethodnog, a u suprotnom treba da bude manji od prethodnog
  bool veci;
  // na osnovu odnosa prva dva elementa odredjujemo kakav treba da
  // bude odnos drugog i treceg elementa
  if (prethodni > tekuci)
    veci = false;
  else if (prethodni < tekuci)
    veci = true;
  else
    testerast = false;
  // obradjujemo ostale elemente dok ne obradimo svih n ili dok
  // ne naidjemo na dva elementa u pogresnom redosledu
  for (int i = 2; i < n && testerast; i++) {
    prethodni = tekuci; // ucitavamo naredni element
    cin >> tekuci;
    // da li je odnos trenutna dva ucitana elementa pogresan
    if ((veci && !(prethodni > tekuci)) ||
        (!veci && !(prethodni < tekuci)))
      testerast = false;
    // odnos naredna dva broja treba da bude suprotan
    veci = !veci;
  }

  // prijavljujemo rezultat
  if (testerast)
    cout << "DA" << endl;
  else
    cout << "NE" << endl;

  return 0;
}