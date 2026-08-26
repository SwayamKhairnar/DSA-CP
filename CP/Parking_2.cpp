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

    int x,y;
    int l,r;
    int a,b;
    cin>>x>>y>>l>>r>>a>>b;
    int overLapped=max(0,min(r,b)-max(a,l));
    int parked=b-a;
    int extra=parked-overLapped;
    cout<<overLapped*x+extra*y<<"\n";
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