#include <bits/stdc++.h>
using namespace std;

// ==================== TYPES ====================

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

// ==================== MACROS ====================

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define endl '\n'

// ==================== CONSTANTS ====================

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// ==================== FAST IO ====================

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ==================== DEBUG ====================

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// ==================== SOLVE ====================

void solve() {

    int n;
    cin >> n;

    vector<int> v(n);

    int ones = 0;
    int twos = 0;
    int threes = 0;
    int fours = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) ones++;
        if (v[i] == 2) twos++;
        if (v[i] == 3) threes++;
        if (v[i] == 4) fours++;
    }

    int ans = 0;

    // 4
    ans += fours;

    // 3 + 1
    int thrOne = min(threes, ones);
    ans += thrOne;
    threes -= thrOne;
    ones -= thrOne;

    // Remaining 3's
    ans += threes;

    // 2 + 2
    int twoto = twos / 2;
    ans += twoto;
    twos %= 2;

    // One group of 2 left
    if (twos) {
        ans++;
        ones = max(0, ones - 2);
    }

    // Remaining 1's
    ans += (ones + 3) / 4;

    cout << ans << endl;
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}