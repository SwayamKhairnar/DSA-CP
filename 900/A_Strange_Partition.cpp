#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n,x;
    cin >> n>>x;
    vector<int>v(n);
    ll sum=0;
    ll maxi=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        maxi+=(v[i]+x-1)/x;
    }
    ll mini=(sum+x-1)/x;
    cout<<mini<<" "<<maxi<<"\n";
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