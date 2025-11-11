#include <iostream>

using namespace std;

int main() {
    // sat, minut i sekund
    int h, m, s;
    cin >> h >> m >> s;
    // broj sekundi od prethodne ponoci
    int S = h*60*60 + m*60 + s;
    cout << S << endl;
    // broj sekundi od prethodne ponoci do sledece ponoci
    int Sponoc = 24*60*60;
    // broj sekundi preostalih do ponoci
    int S_do_ponoci = Sponoc - S;
    // prevodimo to vreme u sate, minute i sekunde
    int s_do_ponoci = (S_do_ponoci / (1)) % 60;
    int m_do_ponoci = (S_do_ponoci / (60)) % 60;
    int h_do_ponoci = (S_do_ponoci / (60*60)) % 24;

    // ispisujemo rezultat
    cout << h_do_ponoci << ":" << m_do_ponoci << ":" << s_do_ponoci << endl;

}