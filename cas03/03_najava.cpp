#include <iostream>
using namespace std;

int UMinute(int h, int m) {
  return h*60 + m;
}

void OdMinuta(int M, int& h, int& m) {
  m = M % 60;
  h = M / 60;
}

int main() {
  // vreme pocetka filma
  int hPocetak, mPocetak;
  cin >> hPocetak >> mPocetak;
  int pocetak = UMinute(hPocetak, mPocetak);
  
  // vreme zavrsetka filma
  int hKraj, mKraj;
  cin >> hKraj >> mKraj;
  int kraj = UMinute(hKraj, mKraj);
  
  // interval u kojem se emituju najave
  int interval;
  cin >> interval;

  // izracunavamo vremena u kojima se emituje najava i ispisujemo ih
  for (int najava = pocetak; najava <= kraj; najava += interval) {
    int hNajava, mNajava;
    OdMinuta(najava, hNajava, mNajava);
    cout << hNajava << ":" << mNajava << endl;
  }
  
  return 0;
}