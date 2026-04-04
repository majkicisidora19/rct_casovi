#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> km(n);
    for (int i = 0; i < n; i++) {
        cin >> km[i];
    }

    // zbir kilometara pre i posle servisa
    int pre = 0, posle = 0;
    for (int i = 0; i < n; i++) {
        posle += km[i];
    }

    // minimalna razlika
    int min_razlika = posle;

    // redni broj dana
    int min_dan = -1;

    for (int dan = 0; dan < n; dan++) {
        // prebacujemo kilometrazu tog dana
        pre += km[dan];
        posle -= km[dan];

        int razlika = abs(posle - pre);

        if (razlika < min_razlika) {
            min_razlika = razlika;
            min_dan = dan;
        }
    }

    cout << min_dan << endl;

    return 0;
}
