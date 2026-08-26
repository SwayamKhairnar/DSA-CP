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

bool isPrime(ll n){
    if(n<2)return false;
    if(n%2==0||n%3==0)return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void solve() {

    ll n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<1<<endl;
        return;
    }
    if(isPrime(n)){
        cout<<n<<endl;
        return;
    }
    ll best=1;
    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            if(i<=k){
                best=max(i,best);
            }
            if((n/i)<=k){
                best=max(n/i,best);
            }
        }
    }
    cout<<n/best<<endl;
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