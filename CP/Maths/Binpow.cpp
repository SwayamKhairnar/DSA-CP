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
ll binpow(ll n,ll p){
    ll ans=1;
    while(p>0){
        if(p&1){
            ans*=n;
        }
        n*=n;
        p>>=1;
    }
    return ans;
}
void solve() {

    ll n,p;
    cin>>n>>p;
    cout<<binpow(n,p)<<endl;

}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}