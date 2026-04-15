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
    for (int i = 0; i <n; i++)
    {
        cin>>v[i];\
        /* code */
    }
    
    for (int i = 1; i <n-1; i++)
    {
        if ((v[i]>v[i-1])&&(v[i]>v[i+1]))
        {
            cout<<"YES\n";
            cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
            return;
            /* code */
        }
        /* code */
    }
    cout<<"NO\n";
    
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