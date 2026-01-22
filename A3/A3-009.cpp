#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k,a[100005],mn=1e18,c;
signed main(void){
    exoworldgd;
    cin>>n>>k;
    for(int i=0,x;i<n;i++)cin>>x,a[x]++;
    for(int i=1;i<=k;i++)mn=min(mn,a[i]);
    for(int i=1;i<=k;i++)c+=a[i]-mn;
    cout<<c;
}