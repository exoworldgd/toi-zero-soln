#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
const int N=105,M=25,inf=1e18;
int n,a[N][N],b[N][N];
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>a[i][j];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>b[i][j];
    for(int i=0;i<n;i++,cout<<'\n')for(int j=0;j<n;j++,cout<<' ')cout<<a[i][j]+b[i][j];
}