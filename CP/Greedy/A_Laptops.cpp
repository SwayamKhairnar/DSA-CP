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
    vector<pair<int,int>>v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(all(v));
    int mini=v[n-1].second;
    for(int i=n-2;i>=0;i--){
        if(v[i].second>mini){
            cout<<"Happy Alex\n";
            return;
        }
        mini=min(v[i].second,mini);
    }
    cout<<"Poor Alex\n";
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