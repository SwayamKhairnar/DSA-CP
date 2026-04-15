#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    int n;
    cin >> n;
    int zeros=0;
    int ones=0;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        if (ele==0)
        {
            zeros++;
        }
        if (ele==1)
        {
            ones++;
        }
    }
    long long value = (1LL << zeros) * ones;
    cout<<value<<endl;
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