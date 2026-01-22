#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k,cnt=1;
signed main(void) {
    exoworldgd;
    cin>>n>>k;
    for(;cnt*cnt<=k;k-=cnt*cnt,cnt++);
    cout<<n-cnt+1;
}