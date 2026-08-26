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
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int rem=0;
    bool possible=true;
    for(int i=0;i<n;i++){
        if(v[i]>i+1){
            rem+=v[i]-(i+1);
        }
        if(v[i]<(i+1)){
            int req=(i+1)-v[i];
            if(req>rem){
                possible=false;
                break;
            }
            rem-=req;
        }
    }
    if(possible){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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