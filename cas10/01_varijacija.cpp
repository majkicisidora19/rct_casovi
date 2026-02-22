#include <iostream>
#include <vector>

using namespace std;

void sledecaVarijacija(int n, vector<int>& varijacija) {
   // od kraja varijacije tražimo prvi element koji se moze povecati
   int i;
   int duzina = varijacija.size();

   for (i = duzina-1; i >= 0 && varijacija[i] == n; i--)
      varijacija[i] = 1;
   // svi elementi su jednaki n - ne postoji naredna varijacija
   if (i < 0)
        cout << "-" << endl;
   // uvecavamo element koji je moguće uvecati
   varijacija[i]++;
   
   
   for(auto x : varijacija)
        cout << x << " ";
    cout << endl;
}

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> varijacija(k);

  for (int i = 0; i < k; i++)
    cin >> varijacija[i];

  sledecaVarijacija(n, varijacija);

  return 0;
}