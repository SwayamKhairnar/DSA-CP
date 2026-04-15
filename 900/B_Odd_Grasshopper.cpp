#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    ll x,n;
    cin>>x>>n;
    ll final_change;
    ll even_add=0;
    ll odd_add=0;
    ll even_t1;
    ll even_tn;
    ll no_of_odds;
    ll no_of_evens;
    ll odd_t1;
    ll odd_tn;
    if (x%2==0)
    {
        even_t1=x+2;
        odd_t1=x+1;
    }
    else
    {
        odd_t1=x+2;
        even_t1=x+1;
    }
    if (x%2==0&&n%2==1)
    {
        no_of_odds=n/2 +1;
        no_of_evens=n/2;
    }
    else if(x%2==1&&n%2==1){
        no_of_evens=n/2 +1;
        no_of_odds=n/2;
    }
    else
    {
        no_of_evens=n/2;
        no_of_odds=n/2;
    }
    if (no_of_evens > 0) {
        ll even_tn = even_t1 + (no_of_evens - 1) * 2;
        even_add = no_of_evens * (even_t1 + even_tn) / 2;
    }

    if (no_of_odds > 0) {
        ll odd_tn = odd_t1 + (no_of_odds - 1) * 2;
        odd_add = no_of_odds * (odd_t1 + odd_tn) / 2;
    }

    cout << x + (odd_add - even_add) << '\n';
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