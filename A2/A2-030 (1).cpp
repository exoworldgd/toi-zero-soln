#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[5][5],r,c,x;
signed main(void){
    exoworldgd;
    for(int i=0;i<5;i++)for(int j=0;j<5;j++)cin>>a[i][j],r^=a[i][j]&1?1<<i:0,c^=a[i][j]&1?1<<j:0;
    cout<<(r?__builtin_ctzll(r):-1)<<" "<<(c?__builtin_ctzll(c):-1);
}