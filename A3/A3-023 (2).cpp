#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0), cout.tie(0)
#define int long long
using namespace std;
const int N=15005;
int a,b,res,dp[4][N];
bitset<N>ok;
signed main(void) {
    exoworldgd;
    cin>>a>>b,ok.set(),ok[0]=ok[1]=0,dp[0][0]=1;
    for(int i=2;i*i<N;i++)if(ok[i])for(int j=i*i;j<N;j+=i)ok[j]=0;
    for(int num=a;num<=b;num++)for(int cnt=1;cnt<=3;cnt++)for(int s=num;s<N;s++)dp[cnt][s]+=dp[cnt-1][s-num];
    for(int s=0;s<N;s++)if(ok[s])res+=dp[3][s];
    cout<<res;
}