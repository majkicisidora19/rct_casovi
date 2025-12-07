#include <iostream>

using namespace std;

int main() {
  int n, cifra;
  cin >> n >> cifra;
  int m = n;
  bool sadrzi = false;
  do { 
    if (m % 10 == cifra) {
      sadrzi = true;
      break;
    }
    m /= 10;
  } while (m > 0);
  cout << "broj " << n << (sadrzi ? " " : " ne ")
       << "sadrzi cifru " << cifra << endl;
  
  return 0;
}