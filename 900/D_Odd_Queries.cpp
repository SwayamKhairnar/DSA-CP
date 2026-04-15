#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n,q;
    cin >> n>>q;
    // your logic here
    vector<ll>v(n);
    cin>>v[0];
    for(int i=1;i<n;i++){
        cin>>v[i];
        v[i]+=v[i-1];
    }
    while (q--)
    {
        ll l,r,k;
        cin>>l>>r>>k;
        
        ll replaced_sum;
        if (l == 1)
            replaced_sum = v[r - 1];
        else
            replaced_sum = v[r - 1] - v[l - 2];
        ll replacing_sum=(r-l+1)*k;
        ll new_sum=v[n-1]-replaced_sum+replacing_sum;
        if (new_sum%2!=0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
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