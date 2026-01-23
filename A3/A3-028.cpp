#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,m,k,g[1005][1005],dx[]={-1,-1,-1,0,0,1,1,1},dy[]={-1,0,1,-1,1,-1,0,1};
signed main(void){
    exoworldgd;
    cin>>n>>m>>k;
    for(int i=0,x,y;i<k;i++){
        cin>>x>>y,g[x][y]=-1;
        for(int j=0;j<8;j++){
            int nx=x+dx[j],ny=y+dy[j];
            if(nx>=0&&nx<n&&ny>=0&&ny<m&&g[nx][ny]!=-1)g[nx][ny]++;
        }
    }
    for(int i=0;i<n;i++,cout<<'\n')for(int j=0;j<m;j++)cout<<(g[i][j]^-1?to_string(g[i][j]):"x")<<' ';
}