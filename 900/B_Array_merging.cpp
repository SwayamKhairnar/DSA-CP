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

ll max_ele(const vector<int>& v) {
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

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    unordered_map<int,int>mpp_a;
    unordered_map<int,int>mpp_b;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        mpp_a[a[i]]=1;
    }
    for (int i = 0; i < n; i++) {
        cin>>b[i];
        mpp_b[b[i]]=1;
    }
    // for (int i = 1; i <=200000; i++) {
    //     if (mpp_a[i]!=1) {
    //         mpp_a[i]=0;
    //     }
    // }
    for (int i = 0; i < n-1; i++) {

        int curr=1;
        while (i<n-1&&a[i+1]==a[i]) {
            curr++;
            i++;
        }
        mpp_a[a[i]]=max(curr,mpp_a[a[i]]);
    }
    for (int i = 0; i < n-1; i++) {
        int curr=1;
        while (i<n-1&&b[i+1]==b[i]) {
            curr++;
            i++;
        }
        mpp_b[b[i]]=max(curr,mpp_b[b[i]]);
    }
    int maxi=0;
    int size =max(max_ele(a),max_ele(b));
    for (int i = 0; i<=size; i++) {
        maxi=max(mpp_a[i]+mpp_b[i],maxi);
    }
    cout<<maxi<<endl;
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