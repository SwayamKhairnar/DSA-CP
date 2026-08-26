#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // int n;
    // cin >> n;
    // your logic here
    string s;
    cin>>s;
    int ans=0;
    if (s[s.length()-1]=='u')
    {
        s[s.length()-1]='s';
        ans++;
    }
    if (s[0]=='u')
    {
        s[0]='s';
        ans++;
    }
    for (int i = 1; i <s.length()-1; i++)
    {
        if (s[i]=='u'&&s[i-1]!='s')
        {
            s[i]='s';
            ans++;
        }
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