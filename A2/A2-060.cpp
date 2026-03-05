#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,x[15],y[15],d[15],i,j,k;
signed main(void){
    exoworldgd;
    cin>>n;
    for(i=0;i<n;i++)cin>>x[i]>>y[i]>>d[i];
    for(i=0;i<=1000;i++)for(j=0;j<=1000;j++){
        int ok=1;
        for(k=0;k<n;k++)if((i-x[k])*(i-x[k])+(j-y[k])*(j-y[k])!=d[k]*d[k])ok=0;
        if(ok)return cout<<i<<" "<<j,0;
    }
}