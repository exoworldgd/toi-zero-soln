#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,a[100005],vs[100005],mx;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1,x,c;i<=n;i++)if(!vs[i]){
    	x=i,c=0;
    	while(x^i||!c)vs[x]=1,c++,x=a[x];
    	mx=max(mx,c);
    }
    cout<<mx;
}