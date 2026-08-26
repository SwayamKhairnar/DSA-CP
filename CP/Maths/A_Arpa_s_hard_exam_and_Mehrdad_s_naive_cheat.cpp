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
    int  modpow(int base,int pow,int mod){
        ll ans=1;
        while(pow>0){
            if(pow&1){
                ans=(ans%10*base%10)%10;
            }
            base=(base%10*base%10)%10;
            pow>>=1;
        }
        return ans%10;
    }
    void solve() {

        int n;
        cin>>n;
        int num=modpow(1378,n,10);
        cout<<num%10<<endl;
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