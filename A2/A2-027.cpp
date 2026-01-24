#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int t,n,cnt,mx=-1e18;
signed main(void){
    exoworldgd;
    cin>>t;
    while(t--)cin>>n,n>mx?(mx=n,cnt=1):n==mx?cnt++:0;
    cout<<mx<<'\n'<<cnt;
}