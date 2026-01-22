#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,a[1005],l[1005],b[1005],r[1005],ans;
int dfs(int u){
    int lw=0,rw=0;
    if(!a[u])lw=dfs(l[u]);
    else lw=l[u];
    if(!b[u])rw=dfs(r[u]);
    else rw=r[u];
    ans+=abs(lw-rw);
    return lw+rw+abs(lw-rw);
}
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>l[i]>>b[i]>>r[i];
    dfs(1),cout<<ans;
}