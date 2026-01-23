#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
char a[1005][1005],b[1005][1005];
signed main(void){
    exoworldgd;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    memcpy(b,a,sizeof(b));
    for(int i=0;i<n-1;i++)for(int j=0;j<m;j++)if(a[i][j]=='*')b[i+1][j]='*';
	for(int i=0;i<n;i++,cout<<'\n')for(int j=0;j<m;j++)cout<<b[i][j]<<' ';
}