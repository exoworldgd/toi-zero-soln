#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[105],n,i,x,f;
signed main(void){
    exoworldgd;
    cin>>n;
    for(i=0;i<n;i++)cin>>x,a[x]++;
    for(i=0;i<=100;i++)if(a[i]==1)cout<<i<<' ',f=1;
    if(!f)cout<<-1;
}