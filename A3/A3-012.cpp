#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,x,a[1000005],vs[1000005],c;
signed main(void){
    exoworldgd;
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>a[i];
    while(x>0&&!vs[x])vs[x]=1,c++,x=a[x];
    cout<<c;
}