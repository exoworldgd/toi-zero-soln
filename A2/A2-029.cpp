#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,i,j;
signed main(void){
    exoworldgd;
    cin>>n;
    for(i=0;i<n;i++,cout<<'\n')for(j=0;j<=i;j++)cout<<(j&&j^i&&i^n-1?"1 ":"0 ");
}