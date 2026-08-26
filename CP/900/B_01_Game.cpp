#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // int n;
    // cin >> n;
    string s;
    cin>>s;
    int zeros=0;
    int ones=0;
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]=='0')
        {
            zeros++;
            /* code */
        }
        else
        {
            ones++;
        }
        /* code */
    }
    if (min(zeros,ones)%2==0)
    {
        cout<<"NET\n";
        /* code */
    }
    else
    {
        cout<<"DA\n";
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