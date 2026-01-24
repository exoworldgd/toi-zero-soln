#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,m,k,y,x,ans,cnt[2005][2005],dy[]={-1,-1,-1,0,0,1,1,1},dx[]={-1,0,1,-1,1,-1,0,1};
signed main(void){
    exoworldgd;
    cin>>n>>m>>k;
    while(k--)cin>>y>>x,(y>=0&&y<n&&x>=0&&x<m)?cnt[y][x]++:0;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)if(!cnt[i][j]){
        int cur=0;
        for(int mask=255,ny,nx,d;mask;mask&=mask-1)d=__builtin_ctz(mask),ny=i+dy[d],nx=j+dx[d],ny>=0&&ny<n&&nx>=0&&nx<m?cur+=cnt[ny][nx]:0;
        ans=max(ans,cur);
    }
    cout<<ans;
}