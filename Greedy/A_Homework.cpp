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

    string s;
    cin >> s;

    int k;
    cin >> k;

    // We can delete the entire string
    if (k >= s.length()) {
        cout << 0 << endl;
        cout << endl;
        return;
    }

    map<char, int> mpp;

    for (char c : s) {
        mpp[c]++;
    }

    // {frequency, character}
    priority_queue<
        pair<int,char>,
        vector<pair<int,char>>,
        greater<pair<int,char>>
    > pq;

    for (auto it : mpp) {
        pq.push({it.second, it.first});
    }

    set<char> removed;

    // Completely remove the least frequent characters
    while (!pq.empty() && pq.top().first <= k) {

        k -= pq.top().first;

        removed.insert(pq.top().second);

        pq.pop();
    }

    // Construct a subsequence of the original string
    string ans = "";

    for (char c : s) {
        if (!removed.count(c)) {
            ans += c;
        }
    }

    cout << mpp.size() - removed.size() << endl;
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