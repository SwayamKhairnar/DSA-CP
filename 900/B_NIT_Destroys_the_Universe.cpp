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
    int ans=0;
    int curr=0;
    for (int i = 0; i <n; i++)
    {
        if (v[i]!=0)
        {
            curr++;
        }
        else if(v[i]==0&&curr!=0){
            ans++;
            curr=0;
        }
    }
    if (curr!=0)ans++;
    if (ans==0||ans==1)
    {
        cout<<ans<<endl;
        /* code */
    }
    else
    {
        cout<<2<<endl;
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