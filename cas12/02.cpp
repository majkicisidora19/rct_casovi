#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long r;
    int n;
    cin >> r >> n;

    vector<long long> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    sort(h.begin(), h.end());

    long long ans = 0;
    int i = 0, j = 1;

    while (i < n && j < n) {
        if (i == j) {
            j++;
            continue;
        }

        long long diff = h[j] - h[i];

        if (diff < r) {
            j++;
        }
        else if (diff > r) {
            i++;
        }
        else {
            long long vi = h[i];
            long long vj = h[j];

            long long cnt_i = 0;
            while (i < n && h[i] == vi) {
                cnt_i++;
                i++;
            }

            long long cnt_j = 0;
            while (j < n && h[j] == vj) {
                cnt_j++;
                j++;
            }

            if (vi == vj) {
                ans += cnt_i * (cnt_i - 1) / 2;
            } else {
                ans += cnt_i * cnt_j;
            }
        }
    }

    cout << ans << endl;
}
