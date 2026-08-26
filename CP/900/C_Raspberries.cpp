#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n,k;
    cin >> n>>k;
    vector<int>v(n);
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if (v[i]%k==0)
        {
            mini=0;
            continue;
            /* code */
        }
        mini=min(mini,k-v[i]%k);
        /* code */
    }
    if (k!=4)
    {
        cout<<mini<<endl;
    }
    else
    {
        int evens=0;
        for (int i = 0; i <n; i++)
        {
            if (v[i]%2==0)
            {
                evens++;
            }
        }
        if (evens>=2)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<min(mini,2-evens)<<"\n";
            return;
        }
        
    }
    
    
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