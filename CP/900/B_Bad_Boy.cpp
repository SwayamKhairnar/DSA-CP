#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n,m,i,j;
    cin>>n>>m>>i>>j;
    int ulx,uly,llx,lly,urx,ury,lrx,lry;
    ulx=1;
    uly=1;
    llx=1;
    lly=m;
    urx=n;
    ury=1;
    lrx=n;
    lry=m;
    int dis1;
    dis1=abs(i-1)+abs(j-1)+abs(m-i)+abs(n-j);
    int dis2;
    dis2=abs(m-i)+abs(1-j)+abs(1-i)+abs(n-j);
    if (dis1>dis2)
    {
        cout<<ulx<<" "<<uly<<" "<<lrx<<" "<<lry<<"\n";
    }
    else
    {
        cout<<urx<<" "<<ury<<" "<<llx<<" "<<lly<<"\n";
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