#include <iostream>
#include <iomanip>
#include <numeric>

using namespace std;

int main(){
    int n;
    double t, p;
    cin >> n >> t >> p;

    for(int i = 1; i < n; i++){
        t *= (1 + p/100);
    }
    gcd(10,5);

    cout << fixed << setprecision(2) << t << endl;

    return 0;
}