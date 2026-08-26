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

bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    else{
        return a.second<b.second;
    }
}
void solve() {

    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    } 
    sort(v.begin(),v.end(),cmp);
    // for(auto it:v){
    //     cout<<it.first<<" "<<it.second<<endl;
    // }
    int ans=1;
    int lastend=v[0].second;
    for(int i=1;i<n;i++){
        int start=v[i].first;
        if(start>=lastend){
            lastend=v[i].second;
            ans++;
        }
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