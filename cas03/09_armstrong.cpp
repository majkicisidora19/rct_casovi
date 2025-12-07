#include <iostream>
using namespace std;

// funkcija izracunava broj cifara broja n
int brojCifara(int n) {
  int broj = 0;
  do {
     broj++;
     n /= 10;
  } while (n > 0);
  return broj;
}

// funkcija izracunava stepen x^n
int stepen(int x, int n) {
   int s = 1;
   for (int i = 0; i < n; i++)
      s *= x;
   return s;
}

// funkcija izracunava zbir k-tih stepena cifara broja n
int zbirKtihStepenaCifara(int n, int k) {
   int zbir = 0;
   do {
     zbir += stepen(n%10, k); // ili (int)pow(n%10, k)
     n /= 10;
   } while (n > 0);
   return zbir;
}

// funkcija proverava da li je dati broj Armstrongov tj. ako broj ima k
// cifara, da li mu je zbir k-tih stepena cifara jednak njemu samom
bool armstrongov(int n) {
  return zbirKtihStepenaCifara(n, brojCifara(n)) == n;
}

int main() {
   int n;
   cin >> n;
   if (armstrongov(n))
      cout << "DA" << endl;
   else
      cout << "NE" << endl;
   return 0;
}