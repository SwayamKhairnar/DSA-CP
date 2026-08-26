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
    vector<int>v(12);
    for(int i=0;i<12;i++){
        cin>>v[i];
    }
    sort(all(v));
    int ans=0;
    int i=11;
    while(n>0 &&i>=0 ){
        n-=v[i--];
        ans++;
    }
    if(n>0){
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
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