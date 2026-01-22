#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,k,mx,c;
array<int,2>v[200005];
signed main(void){
    exoworldgd;
    cin>>k>>n;
    for(int i=0,l,r;i<n;i++)cin>>l>>r,v[2*i]={l,1},v[2*i+1]={r+1,-1};
    sort(v,v+2*n);
    for(int i=0;i<2*n;i++){
    	c+=v[i][1];
    	if(i>=2*n-1||v[i+1][0]^v[i][0])mx=max(mx,c);
    }
    cout<<mx;
}