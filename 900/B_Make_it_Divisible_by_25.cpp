#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

pair<int,int> gap_between(vector<int>& v, int a, int b) {
    pair<int,int> p = {-1, -1};

    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] == b) {
            p.second = i;
            break;
        }
    }

    if (p.second == -1) return p;

    for (int i = p.second - 1; i >= 0; i--) {
        if (v[i] == a) {
            p.first = i;
            break;
        }
    }

    return p;
}

int calc(pair<int,int> p, int n) {
    if (p.first == -1) return INT_MAX;
    return (n - 1 - p.second) + (p.second - p.first - 1);
}

void solve() {
    long long n;
    cin >> n;

    vector<int> v;
    while (n > 0) {
        v.push_back(n % 10);
        n /= 10;
    }

    reverse(v.begin(), v.end());
    int sz = v.size();

    int ans = INT_MAX;

    ans = min(ans, calc(gap_between(v, 0, 0), sz)); // 00
    ans = min(ans, calc(gap_between(v, 2, 5), sz)); // 25
    ans = min(ans, calc(gap_between(v, 5, 0), sz)); // 50
    ans = min(ans, calc(gap_between(v, 7, 5), sz)); // 75

    if (ans == INT_MAX)
        cout << sz << '\n';
    else
        cout << ans << '\n';
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
