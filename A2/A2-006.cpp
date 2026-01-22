#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,ans,dp[35][35];
char g[35][35];
bool ok(int i,int j){
    if(i==n-1&&j==n-1)return dp[i][j]=1;
    if(dp[i][j]!=-1)return dp[i][j];
    dp[i][j]=0;
    if(i+1<n&&g[i+1][j]=='.')dp[i][j]|=ok(i+1,j);
    if(j+1<n&&g[i][j+1]=='.')dp[i][j]|=ok(i,j+1);
    return dp[i][j];
}
signed main(void){
    exoworldgd;
    cin>>n,memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>g[i][j];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)ans+=g[i][j]=='.'&&ok(i,j);
    cout<<ans;
}