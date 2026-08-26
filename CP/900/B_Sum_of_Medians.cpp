//main thing was to maximize median(here defn is given for median) 
//so for maximising we take the biggest no from back upto (n/2)+1 jump every time k times and the ele at that posn is out ans 




#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n,k;
    cin >> n>>k;
    vector<int>v(n*k);
    for (int i = 0; i <n*k; i++)
    {
        cin>>v[i];
        /* code */
    }
    ll ans=0;
    // if(n==2 && k==1){
    //     for (int i = 0; i < n*k; i++)
    //     {
    //         ans+=v[i];
    //     }
    //     cout<<ans<<"\n";
    //     return;
    // }
    ll size=n*k;
    int i=size-(n/2)-1;
    while (k--)
    {
        ans+=v[i];
        i-=(n/2)+1;
        /* code */
    }
    cout<<ans<<endl;
    
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