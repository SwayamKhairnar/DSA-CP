#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    ll n,p;
    cin >> n>>p;
    vector<ll>cap(n);
    vector<ll>cost(n);
    for (int i = 0; i < n; i++) {
        cin>>cap[i];
    }
    for (int i = 0; i < n; i++) {
        cin>>cost[i];
    }
    vector<pair<ll,ll>>v(n);
    for (int i = 0; i < n; i++) {
        v[i].first=cap[i];
        v[i].second=cost[i];
    }
    sort(all(v),[](const pair<ll,ll>& a,const pair<ll,ll>& b){
        if (a.second!=b.second) {
            return a.second<b.second;
        }
        return a.first>b.first;
    });
    ll sent=1;
    ll idx=0;
    ll Total_cost=p;
    while (idx<n&&sent!=n) {
        ll mini_curr_cost=min(v[idx].second,p);
        ll can_send=min<ll>(n-sent,v[idx].first);
        if (mini_curr_cost==p) {
            Total_cost+=(n-sent)*p;
            break;
        }
        sent+=can_send;
        Total_cost+=(can_send*mini_curr_cost);
        idx++;
    }
    cout<<Total_cost<<endl;
    // your logic here
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