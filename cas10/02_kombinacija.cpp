#include <iostream>
#include <vector>

using namespace std;

void sledecaKombinacija(int n, vector<int>& kombinacija) {
   // od kraja varijacije tražimo prvi element koji se moze povecati
   int i,j;
   int duzina = kombinacija.size();

   for (i = duzina-1, j = 0; i >= 0 && kombinacija[i] == n - j; i--, j++)
      continue;
   // svi elementi su najveci moguci - ne postoji naredna kombinacija
   if (i < 0){
        cout << "-" << endl;
        return;
   }
   // uvecavamo prvi element koji je moguće uvecati
   kombinacija[i]++;

   // sve posle njega azuriramo
   for(int j = i+1; j < kombinacija.size(); j++)
      kombinacija[j] = kombinacija[j - 1] + 1;
   
   for(auto x : kombinacija)
        cout << x << " ";
    cout << endl;
}

int main() {
  int n;
  cin >> n;

  vector<int> kombinacija(0);

  int x;
  while (cin >> x)
    kombinacija.push_back(x);
    
  sledecaKombinacija(n, kombinacija);

  return 0;
}