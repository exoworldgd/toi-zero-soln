#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d,e,f,g,j,k,l;
signed main(void){
    exoworldgd;
    cin>>a;
    while(a--)cin>>b>>c>>d>>e>>f>>g,j+=max(b,e),k+=max(c,f),l+=max(d,g);
    cout<<j+k+l<<'\n'<<j<<' '<<k<<' '<<l<<'\n'<<(j>k+l?"YES":"NO");
}