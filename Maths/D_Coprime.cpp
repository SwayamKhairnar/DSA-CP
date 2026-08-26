// brute n^2 wont work cuz 2e5 is the constraints now abt the  optimized version 
// among coprimes both no can also be non primes now here ai max=1000 so biggest div =1000 now what if we count the freq of each divisor that how many numbers each divisor divides 
//then the divisor which has only one multiple that divisor  


#include <bits/stdc++.h>
using namespace std;

// ==================== TYPES ====================

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

// ==================== MACROS ====================

#define pb push_back
#define ff first
#define ss second

#define all(x) (x).begin(), (x).end()

#define yes cout << "YES\n"
#define no cout << "NO\n"

#define endl '\n'

// ==================== CONSTANTS ====================

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// ==================== FAST IO ====================

void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// ==================== DEBUG ====================

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl;
#else
#define debug(x)
#endif

// ==================== SOLVE ====================

void solve() {

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>freq(1001,0);
    for(int i=0;i<n;i++){
        freq[v[i]]=i+1;
    }
    int maxi=-1;
    for(int i=1;i<1001;i++){
        for(int j=0;j<1001;j++){
            if(freq[i]>0 && freq[j]>0 && gcd(i,j)==1){
                maxi=max(freq[i]+freq[j],maxi);
            }
        }
    }   
    cout<<maxi<<endl;
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}