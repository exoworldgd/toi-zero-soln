#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d=1000,e,f;
signed main(void){
    exoworldgd;
    cin>>a,f=a;
    while(a--)cin>>e,b+=e,c=max(c,e),d=min(d,e);
    cout<<b<<"\n"<<c<<"\n"<<d<<"\n"<<fixed<<setprecision(1)<<(double)b/f;
}