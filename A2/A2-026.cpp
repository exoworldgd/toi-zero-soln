#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int t,x,c,mx=-1e18;
char a[1005],s[1005];
signed main(void){
    exoworldgd;
    cin>>t;
    while(t--)cin>>s>>x,c+=x>15,x>mx?(mx=x,strcpy(a,s)):0;
    cout<<c<<'\n'<<a<<' '<<mx;
}