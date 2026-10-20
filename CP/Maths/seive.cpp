#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>seive(100001,1);
    for(int i=2;i<=100000;i++){
        if(seive[i]){
            for(int j=2*i;j<=100000;j+=i){
                seive[j]=0;
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=100000;i++){
        if(seive[i])cnt++;
    }
    cout<<cnt<<endl;
}