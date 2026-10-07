#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        int m = n - 4;
        vector<int> v(m);
        for (int i = 0; i < m; i++) v[i] = a[i] + a[i + 2] - a[i + 4];

        vector<int> s = v;
        sort(s.begin(), s.end());

        long long ans = 0;
        for (int i = 0; i < m;) {
            int j = i;
            while (j < m && s[j] == s[i]) j++;
            long long c = j - i;
            ans += c * (c - 1) / 2;
            i = j;
        }

        for (int i = 0; i < m; i++) {
            if (i + 2 < m && v[i] == v[i + 2]) ans--;
            if (i + 4 < m && v[i] == v[i + 4]) ans--;
        }

        cout << ans << "\n";
    }
}