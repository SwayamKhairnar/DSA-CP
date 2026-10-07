#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<ll,tuple<ll,ll,ll>>>v(n);
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        ll sum=x+y+z;
        v[i]={sum,{x,y,z}};
        /* code */
    }
    sort(v.begin(),v.end());
    vector<ll>diff(n-1);
    for(int i=1;i<v.size();i++){
        diff[i]=v[i].first-v[i-1].first;
    }
    ll ans=0;
    int idx=0;
    int prev=0;
    while (k>0)
    {
        ll x = get<0>(v[idx].second);
        ll y = get<1>(v[idx].second);
        ll z = get<2>(v[idx].second);
        int maxi;
        if((x-y)>0){
            maxi=z;
        }
        else if((x-z)>0){
            maxi=y;
        }
        else{
            maxi=x;
        }
        
        /* code */
    }
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        /* code */
    }
    
}