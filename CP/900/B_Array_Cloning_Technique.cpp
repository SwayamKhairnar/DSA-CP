#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n;
    cin >> n;

    map<ll,int> mpp;
    int maxi = 0;

    for (int i = 0; i < n; i++) {
        ll ele;
        cin >> ele;
        mpp[ele]++;
        maxi = max(maxi, mpp[ele]);
    }

    if (maxi == n) {
        cout << 0 << '\n';
        return;
    }

    int ans = 0;
    int curr = maxi;

    while (curr < n) {
        curr *= 2;
        ans++;
    }

    ans += (n - maxi);
    cout << ans << '\n';
}


int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}