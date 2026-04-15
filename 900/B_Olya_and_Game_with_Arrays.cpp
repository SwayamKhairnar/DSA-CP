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
    ll n;
    cin >> n;
    ll N = n;

    vector<pair<ll,ll>> p;
    if (n==1) {
        ll m;
        cin>>m;
        vector<int>v(m);
        for (int i = 0; i < m; i++) {
            cin>>v[i];
        }
        sort(all(v));
        cout<<v[0]<<endl;
        return;
    }
    while (n--) {
        ll m;
        cin >> m;
        vector<ll> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        sort(all(v));
        p.push_back({v[0], v[1]}); // smallest, second smallest
    }

    // sort by second smallest descending
    sort(all(p), [](const pair<ll,ll>& a, const pair<ll,ll>& b) {
        return a.second > b.second;
    });

    ll no_change;
    for (int i = 0; i < n; i++) {
        no_change+=p[i].first;
    }
    ll biggest_chage=INT_MIN;
    int biggest_change_index=-1;
    for (int i = 0; i < n; i++) {
        if (abs(p[i].first-p[i].second)>biggest_chage) {
            biggest_change_index=i;
            biggest_chage=abs(p[i].first-p[i].second);
        }
    }
    ll smallest_smol=INT_MAX;
    for (int i = 0; i < n; i++) {
        smallest_smol=min(p[i].first,smallest_smol);
    }
    if (biggest_chage>abs(p[biggest_change_index].first-smallest_smol)){
        
    }
    // cout << ans << '\n';
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