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

    int n,k;
    cin>>n>>k;
    vector<int>s(n);
    vector<int>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
    long long ans=0;
    long long fuel=0;
    int leftMax=0;
    for(int i=0;i<n;i++){
        fuel+=s[i];
        leftMax=max(leftMax,s[i]);
        while(fuel<d[i]){
            fuel+=leftMax;
            ans+=k;
        }
        fuel-=d[i];
        ans+=d[i];
    }
    
    cout<<ans<<endl;
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
    //cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}