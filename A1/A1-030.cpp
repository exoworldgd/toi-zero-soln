#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,ans;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int a,b;n--;)cin>>a>>b,ans+=max(a,b),cout<<max(a,b)<<(n?" + ":" = ");
    cout<<ans;
}