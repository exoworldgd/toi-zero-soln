#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,k,a1[305],a2[305],b1[305],b2[305],ans=1e18;
signed main(void){
    exoworldgd;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a1[i];
    for(int i=0;i<n;i++)cin>>a2[i];
    for(int i=0;i<n;i++)cin>>b1[i];
    for(int i=0;i<n;i++)cin>>b2[i];
    sort(a1,a1+n),sort(a2,a2+n),sort(b1,b1+n),sort(b2,b2+n);
    for(int i=0;i<=min(n,k);i++){
        int j=k-i,mx=0;
        if(j>n)continue;
        for(int x=0;x<i;x++)mx=max(mx,a1[x]+b1[i-x-1]);
        for(int x=0;x<j;x++)mx=max(mx,a2[x]+b2[j-x-1]);
        ans=min(ans,mx);
    }
    cout<<ans;
}