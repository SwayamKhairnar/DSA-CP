//1200 rated CF CSES problem 
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

bool cmp(const pair<int,int>& a, const pair<int,int>& b){
    if (a.second == b.second)
        return a.first < b.first;
    return  b.second>a.second;
}
void solve() {

    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int start;
        int end;
        cin>>start;
        cin>>end;
        mpp[start]++;
        mpp[end]--;
    }
    int maxi=0;
    int curr=0;
    for(auto it:mpp){
        curr+=it.second;
        maxi=max(curr,maxi);
    }
    cout<<maxi<<endl;
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