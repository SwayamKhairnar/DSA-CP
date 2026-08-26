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

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << '\n';
#else
#define debug(x)
#endif

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin>>v[i];
        v[i]=v[i]%k;
    }
    if (k==1) {
        for (int i = 0; i < n; i++) {
            cout<<i+1<<" ";
        }
        cout<<"\n";
        return ;  
    }
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        if (v[i]==0) {
            ans.push_back(i+1);
        }
    }
    vector<pair<int,int>>p;
    for (int i = 0; i <n; i++) {
        if (v[i]!=0) {
            p.push_back({v[i],i+1});
        }        
    }
    sort(all(p),[](const pair<int,int>&a,const pair<int,int>&b){
        if (a.first!=b.first) {
            return a.first>b.first;
        }
        return a.second<b.second;
    });
    for (int i = 0; i <p.size(); i++) {
        ans.push_back(p[i].second);
    }
    
    for (int i = 0; i <ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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