#include <iostream>

using namespace std;

bool prestupna(int godina) {
  return (godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0;
}

int main() {
  int godina;
  cin >> godina;
  if (prestupna(godina))
    cout << "da" << endl;
  else
    cout << "ne" << endl;
  return 0;
}