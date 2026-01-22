#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k,c;
signed main(void){
    exoworldgd;
    cin>>k>>n;
    for(;n>0;c++)for(int i=1;i<=k*c;i++)n-=min(i,k);
    cout<<c-1;
}
