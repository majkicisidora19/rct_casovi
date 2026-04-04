#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;

    vector<vector<string>> a(26);

    // ucitavanje reci
    for (int i = 0; i < k; i++) {
        string s;
        cin >> s;
        int idx = s[0] - 'a';
        a[idx].push_back(s);
    }

    // sortiranje reci za svako slovo
    for (int i = 0; i < 26; i++) {
        sort(a[i].begin(), a[i].end());
    }

    // pokazivaci na trenutnu rec
    vector<int> p(26, 0);

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        int idx = c - 'a';

        cout << a[idx][p[idx]] << endl;

        p[idx] = (p[idx] + 1) % a[idx].size();
    }

    return 0;
}