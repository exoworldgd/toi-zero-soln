#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
char a[5005][5005],b[5005][5005];
signed main(void){
    exoworldgd;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>b[i][j];
    for(int i=0;i<n;i++,cout<<'\n')for(int j=0;j<m;j++)cout<<(a[i][j]=='-'?b[i][j]:b[i][j]=='-'?a[i][j]:'*');
}
