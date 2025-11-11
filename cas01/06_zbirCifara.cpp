#include <iostream>
using namespace std;

int main() {
   // polazni broj i njegovo ucitavanje
   int broj;
   cin >> broj;
   
   // izracunavanje zbira cifara
   int cifraJedinica = (broj / 1) % 10;
   int cifraDesetica = (broj / 10) % 10;
   int cifraStotina  = (broj / 100) % 10;
   int cifraHiljada  = (broj / 1000) % 10;
   int zbirCifara = cifraJedinica + cifraDesetica +
                    cifraStotina  + cifraHiljada;

   // prikaz rezultata
   cout << zbirCifara << endl;
   
   return 0;
}