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
    int ans=0;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int idx=1;
    bool flag=true;
    while(idx<n){
        while (idx>0&&v[idx-1]>=v[idx])
        {
            if(idx!=0&&v[idx]==0){
            flag=false;
            break;
            }
            v[idx-1]/=2;
            idx--;
            ans++;
        }
        idx++;
    }
    if (flag)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
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