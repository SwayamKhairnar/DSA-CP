#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define all(x) (x).begin(), (x).end()
#define pb push_back

const ll INF = 1e18;
const int MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

ll binexp(ll a, ll b, ll mod = MOD) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

ll addmod(ll a, ll b, ll mod = MOD) {
    return (a % mod + b % mod) % mod;
}

ll submod(ll a, ll b, ll mod = MOD) {
    return (a % mod - b % mod + mod) % mod;
}

ll mulmod(ll a, ll b, ll mod = MOD) {
    return (a % mod * b % mod) % mod;
}

ll arr_sum(const vector<ll>& v) {
    ll s = 0;
    for (ll x : v) s += x;
    return s;
}

ll max_ele(const vector<ll>& v) {
    return *max_element(all(v));
}

ll min_ele(const vector<ll>& v) {
    return *min_element(all(v));
}

vector<ll> prefix_sum(const vector<ll>& v) {
    int n = v.size();
    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }
    return pref;
}
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
long long smallestFactor(long long n) {
    if (n <= 1) return n;
    if (n % 2 == 0) return 2;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;
}

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve() {
    int n,m;
    cin>>n>>m;
    int neg=0;
    int pos=0;
    vector<vector<int>> v(n, vector<int>(m));
    int mini_no=INT_MAX;
    int ans=0;
    for (int i = 0; i < n; i++) {
        for(int j=0;j<m;j++){
            cin>>v[i][j];
            if(v[i][j]<0){
                neg++;
            }
            else{
                pos++;
            }
            mini_no=min(abs(v[i][j]),mini_no);
            ans+=abs(v[i][j]);
        }
    }
    if (neg%2==0) {
        cout<<ans<<"\n";
    }
    else{
        cout<<ans-2*(mini_no)<<"\n";
    }
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}