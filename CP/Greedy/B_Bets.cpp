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

    int n,m;
    cin>>n>>m;
    pair<int,int>arr[n+1];
    for(int i=1;i<=n;i++){
        arr[i].first=1e9;
        arr[i].second=0;
    }
    for(int i=0;i<m;i++){
        int l,r,t,c;
        cin>>l>>r>>t>>c;
        for(int j=l;j<=r;j++){
            if(arr[j].first>t){
                arr[j].first=t;
                arr[j].second=c;
            }
        }
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i].first==1e9)continue;
        ans+=arr[i].second;
    }
    cout<<ans<<endl;
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
//    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}