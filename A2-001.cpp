#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
const int N=505;
int n,m,r[N],b[N],ans;
signed main(void){
    exoworldgd;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>r[i];
    for(int i=1;i<=m;i++)cin>>b[i];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)ans+=(i&1^j&1?(r[i]<b[j+1]&&b[j]<r[i+1])||(b[j]<r[i+1]&&r[i]<b[j+1]):(r[i]<b[j]&&b[j+1]<r[i+1])||(b[j]<r[i]&&r[i+1]<b[j+1]));
    for(int i=0;i<=n;i++)for(int j=i&1;j<=m;j+=2)ans+=r[i]==b[j];
    cout<<ans;
}
