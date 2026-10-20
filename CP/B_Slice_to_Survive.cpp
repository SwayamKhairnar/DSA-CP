//basically first find the size of array to apply the bs thats the turn 1 then find mid until low<=h and turn++ each time 
//do this for both cols and rows and return count 
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    //do both cuts horizontal and vertical and then return min of them 
    //horizontal cut
    int horizontal=0;
    int vertical=0;
    int ch,cl,rh,rl;
    if((b-1)<=(m-b)){
        ch=b;
        cl=1;
    }
    else{
        cl=b;
        ch=m;
    }
    horizontal++;
    while (cl<ch)
    {
        int mid=(ch+cl)/2;
        ch=mid;
        horizontal++;
        /* code */
    }
    int rows=n;
    while (rows>0)
    {
        rows>>=1;
        horizontal++;
        /* code */
    }
    if((n&(n-1))==0)horizontal--;
    if((a-1)<=(n-a)){
        rh=a;
        rl=1;
    }
    else{
        rl=a;
        rh=n;
    }
    vertical++;
    while (rl<rh)
    {
        int mid=(rh+rl)/2;
        rh=mid;
        vertical++;
        /* code */
    }
    int cols=m;
    while (cols>0)
    {
        cols>>=1;
        vertical++;
        /* code */
    }
    if(((m)&(m-1))==0)vertical--;
    cout<<min(horizontal,vertical)<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
        /* code */
    }
    
}