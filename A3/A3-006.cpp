#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,in,ans,v[2005],arr[2005],vc,ac;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=1;i<=200;i++){
        for(int j=1;j<=9;j++)v[vc++]=i*2;
        v[vc++]=i;
    }
    sort(v,v+vc);
    for(int i=1;i<=n;i++)cin>>in,arr[ac++]=in;
    sort(arr,arr+ac,greater<int>());
    for(int i=0;i<n;i++)ans+=arr[i]*v[i];
    cout<<ans;
}