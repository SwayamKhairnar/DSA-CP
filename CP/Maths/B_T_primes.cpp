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

ll isPerfectSq(ll n){
    if(n==0)return 0;
    ll low=1;
    ll high=n;
    ll ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(mid<=n/mid){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}


void solve(vector<int>&seive) {

    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        ll sqrt=isPerfectSq(v[i]);
        if(sqrt*sqrt==v[i]){
            if(seive[sqrt]==sqrt){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
    //cin >> t;
    vector<int>seive(1e6+1);
    for(int i=0;i<seive.size();i++){
        seive[i]=i;
    }
    for(int i=2;i*i<=1e6;i++){
        if(seive[i]==i){
            for(int j=i*i;j<=1e6;j+=i){
                if(seive[j]==j){
                    seive[j]=i;
                }
            }
        }
    }
    seive[1]=-1;
    seive[0]=-1;
    while(t--) {
        solve(seive);
    }

    return 0;
}