#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;   
    cin>>s;
    stack<int>st;
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            st.push(i+1);
        }
        else if(s[i]=='2'){
            if(!st.empty()){
                st.pop();
                ans.push_back(i+1);
            }
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";
    return;
}
int main(){
    int t;
    cin>>t; 
    while(t--){
        solve();  
    }
}