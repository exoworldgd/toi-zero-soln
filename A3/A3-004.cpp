#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int a[200005],b[200005],n,s;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0,x,y;i<n;i++)cin>>x>>y,a[i]=x+y,b[i]=x-y;
    sort(a,a+n),sort(b,b+n);
    for(int i=0;i<n;i++)s+=abs(a[i]-a[n/2])+abs(b[i]-b[n/2]);
    cout<<s;
}