#include <iostream>
#include <vector>

using namespace std;

void sledecaPermutacija(vector<int>& permutacija) {

    int duzina = permutacija.size();
    int i, j;

   // od kraja tražimo prvi element koji remeti monotonost
    for (i = duzina - 2; i >= 0 && permutacija[i] >= permutacija[i + 1]; i--)
        continue;

   // nema sledeće permutacije
   if (i < 0) {
      cout << "-" << endl;
      return;
   }

   // od kraja tražimo prvi element veći od permutacija[i]
   for (j = duzina - 1; permutacija[j] <= permutacija[i]; j--)
      continue;

   // zamena
   swap(permutacija[i], permutacija[j]);

   // obrtanje dela posle i
   int l = i + 1, r = duzina - 1;
   while (l < r) {
      swap(permutacija[l], permutacija[r]);
      l++;
      r--;
   }

   // ispis
   for (auto x : permutacija)
      cout << x << endl;
}

int main() {
    
    int n;
    cin >> n;

    vector<int> permutacija(n);
    for(int i = 0; i < n; i++)
        cin >> permutacija[i];
    

    sledecaPermutacija(permutacija);

   return 0;
}