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
    int zeros=0;
    int ones=0; 
    for (int i = 0; i <s.length(); i++)
    {
        if (s[i]=='0')
        {
            zeros++;
            /* code */
        }else{
            ones++;
        }
        /* code */
    }
    if (zeros==ones)
    {
        cout<<0<<"\n";
        return;
        /* code */
    }
    for (int i = 0; i <s.length(); i++)
    {
        // if (!(zeros&&ones))
        // {
        //     cout<<s.length()-i<<"\n";
        //     return;
        //     /* code */
        // }
        
        if(s[i]=='0'){
            if (!ones)
            {
                cout<<s.length()-i<<"\n";
                return;
                /* code */
            }
            
            ones--;
        }
        else
        {
            if (!zeros)
            {
                cout<<s.length()-i<<"\n";
                return;
                /* code */
            }
            zeros--;
        }
        /* code */
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