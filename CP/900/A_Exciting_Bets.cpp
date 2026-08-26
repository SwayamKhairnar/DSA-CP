#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    ll a,b;
    cin>>a>>b;
    if (a==b)
    {
        cout<<0<<" "<<0<<"\n";
        return;
        /* code */
    }
    
    ll diff=abs(a-b);
    ll gcd_achievable=diff;
    ll moves=min(a%gcd_achievable,gcd_achievable-(a%gcd_achievable));
    cout<<gcd_achievable<<" "<<moves<<endl;
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