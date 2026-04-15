#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vector<int>v(n);
    // your logic here
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    int ans=v[n-1]-v[0];
    for (int i = 1; i <n; i++)
    {
        ans=max(ans,v[i]-v[0]);
    }
    for (int i = 0; i <n-1; i++)
    {
        ans=max(ans,v[n-1]-v[i]);
    }
    for (int i = 1; i <n; i++)
    {
        ans=max(v[i-1]-v[i],ans);
    }
    cout<<ans<<endl;
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