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
    cin>>n;
    int rev=0;
    string s;
    cin>>s;
    vector<int>ans(n);
    deque<int>dq;
    for (int i = 0; i < n; i++) {
    if (!rev)
        dq.push_back(i + 1);
    else
        dq.push_front(i + 1);

    if (s[i] == 'o')
        rev ^= 1;
    }
    if (!rev) {
    for (int x : dq)
        cout << x << " ";
} else {
    for (auto it = dq.rbegin(); it != dq.rend(); ++it)
        cout << *it << " ";
}
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
    while(t--) {
        solve();
    }

    return 0;
}