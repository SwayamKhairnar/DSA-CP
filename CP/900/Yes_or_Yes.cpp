#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    string s;
    int y=0;
    cin>>s;
    for(char it:s){
        if (it=='Y')
        {
            y++;
        }
    }
    if (y<=1)
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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