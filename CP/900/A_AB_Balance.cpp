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
    int ab=0;
    int ba=0;
    for (int i = 1; i <s.length(); i++)
    {
        if (s[i-1]=='a'&&s[i]=='b')
        {
            ab++;
        }
        else if(s[i-1]=='b'&&s[i]=='a')
        {
            ba++;
        }
    }
    if (ab==ba)
    {
        cout<<s<<"\n";
        return;
    }
   if (ab!=ba){
        if (s[0]=='a')s[s.length()-1]='a';
        else
        {
            s[s.length()-1]='b';
        }
   }
        cout<<s<<endl;
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