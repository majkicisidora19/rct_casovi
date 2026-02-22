#include <iostream>
#include <vector>

using namespace std;

void generisi_sve_varijacije(int n, int k, vector<int> &varijacija) {
    // ako je cela varijacija popunjena, ispisujemo je
    if (k == 0) {
        for (int broj : varijacija) {
            cout << broj << " ";
        }
        cout << endl;
        return;
    }

    // dodavanje sledeceg elementa u varijaciju
    for (int i = 1; i <= n; i++) {
        varijacija.push_back(i);
        generisi_sve_varijacije(n, k-1, varijacija);
        varijacija.pop_back(); // vracanje u prethodno stanje
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> varijacija;
    generisi_sve_varijacije(n, k, varijacija);

    return 0;
}