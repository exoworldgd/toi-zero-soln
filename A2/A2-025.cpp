#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int r,c,rr,rc,n,g[105][105],safe;
signed main(void){
    exoworldgd;
    cin>>r>>c>>rr>>rc>>n;
    for(int i=0,x,y;i<n;i++){
        cin>>x>>y;
        for(int dx=-2;dx<=2;dx++){
            for(int dy=-2;dy<=2;dy++){
                int nx=x+dx,ny=y+dy;
                if(nx<0||nx>=r||ny<0||ny>=c)continue;
                int d=max(abs(dx),abs(dy));
                if(!d)g[nx][ny]=max(g[nx][ny],100LL);
                else if(d==1)g[nx][ny]=max(g[nx][ny],60LL);
                else if(d==2)g[nx][ny]=max(g[nx][ny],20LL);
            }
        }
    }
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)safe+=!g[i][j];
    cout<<safe<<'\n'<<g[rr][rc]<<"%";
}