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

void solve(vector<int>seive) {
    int n;
    cin>>n;
    ll num=0;
    ll sum=0;
    ll prod=0;
    
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
//    cin >> t;
    vector<int>seive(1e5+1);
    for(int i=2;i<=1e5;i++){
        seive[i]=i;
    }
    for(int i=2;i*i<=1e5;i++){
        if(seive[i]=i){
            for(int j=i*i;j<=1e5;j+=i){
                if(seive[j]=j){
                    seive[j]=i;
                }
            }   
        }
    }
    while(t--) {
        solve(seive);
    }

    return 0;
}