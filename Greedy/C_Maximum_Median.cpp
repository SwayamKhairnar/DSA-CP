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

pair<ll,ll> lb(vector<ll>&v,long long ele,ll l,ll h){
    pair<long long ,ll>ans={v.size()-1,ele-1};  
    while(l<=h){
        ll mid=l+(h-l)/2;
        if(v[mid]>=ele){
            ans.first=mid;
            ans.second=v[mid];
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
void solve() {

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(all(v));
    ll med=n/2;
    long long median=v[med];
    while(k>0){
        pair<ll,ll>p=lb(v,median+1,med,n-1);
        if(p.second==median){
            cout<<median+k/(n-med)<<endl;
            return;
        }
        ll element=p.second;
        ll elements=p.first-med;
        ll gap=element-median;
        ll req=gap*elements;
        if(k>=req){
            median+=gap;
            k-=req;
        }
        else{
            median+=k/elements;
            k=0;
        }
    }
    cout<<median<<endl;

}

// ==================== MAIN ====================

int main() {

    fastIO();

    int t=1;
//    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}