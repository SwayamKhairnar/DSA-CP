#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n;
    cin >> n;
    // your logic here
    vector<ll>v(n);
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];
    }
    if (v[0]==1)v[0]++;
    for (int i = 1; i <n; i++)
    {
        if (v[i]==1)v[i]++;
        
        if (v[i]%v[i-1]==0)
        {
            v[i]++;
        }
    }
    
    for (int i = 0; i <n; i++)
    {
        cout<<v[i]<<" ";
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