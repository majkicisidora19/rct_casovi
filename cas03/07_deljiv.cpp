#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> k >> n;
  for (int d = 2; d <= n; d++)   // proveravamo sve delioce od 2 do n
    if (k % d != 0) {            //   ako k nije deljiv sa d
      cout << "ne" << endl;      //     onda nije deljiv sa svim brojevima
      return 0;
    }
  cout << "da" << endl; // ispisujemo rezultat
  return 0;
}