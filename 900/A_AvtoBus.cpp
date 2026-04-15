#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    ll n;
    cin >> n;
    // your logic here
    if (n<4||n%2==1)
    {
        cout<<-1<<endl;
    }
    else{
        ll min_no_tyres;
        ll max_no_tyres;
            min_no_tyres=(n+5)/6;
            max_no_tyres=n/4;
            cout<<min_no_tyres<<" "<<max_no_tyres<<endl;
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