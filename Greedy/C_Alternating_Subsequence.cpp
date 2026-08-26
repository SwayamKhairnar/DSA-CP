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
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bool neg=false;
    if(v[0]<0)neg=false;
    ll currMax=v[0];
    ll ans=0;
    for(int i=1;i<n;i++){
        if((v[i]<0 && v[i-1]<0)||(v[i]>0 &&v[i-1]>0)){
            currMax=max(v[i],currMax);
        }
        else{
            ans+=currMax;
            currMax=v[i];
        }
    }
    ans+=currMax;
    cout<<ans<<endl;
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