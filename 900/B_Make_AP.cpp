#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // int n;
    // cin >> n;
    // your logic here
    // ||(c+a)%(2*b)==0||(2*b-a)%c==0
    int a,b,c;
    bool ok=false;
    cin>>a>>b>>c;
    if ((2*b-c)%a==0&&(2*b)>c)
    {
        ok=true;
    }
    if (((c+a)%(2*b)==0))
    {
        ok=true;
    }
    if ((2*b-a)%c==0&&(2*b)>a)
    {
        ok=true;
    }
    if (ok)
    {
        cout<<"YES\n";
        /* code */
    }
    else
    {
        cout<<"NO\n";
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