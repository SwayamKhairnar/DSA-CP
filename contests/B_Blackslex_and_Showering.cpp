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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int total_gap=0;
    for (int i = 1; i <n; i++)
    {
        total_gap+=abs(v[i]-v[i-1]);
    }
    int to_delete=0;
    to_delete=max(to_delete,abs(v[0]-v[1]));
    to_delete=max(to_delete,abs(v[n-1]-v[n-2]));
    for (int i = 1; i <=n-2; i++)
    {
        int after_delete=abs(v[i]-v[i-1])+abs(v[i+1]-v[i])-abs(v[i-1]-v[i+1]);
        to_delete=max(after_delete,to_delete);
    }
    cout<<total_gap-to_delete<<endl;
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