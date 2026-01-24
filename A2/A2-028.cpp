#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,b;
int n,c;
signed main(void){
    exoworldgd;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)c+=a[i]+b[i]-2*'0'!=9;
    cout<<(c?"NO "+to_string(c):"YES");
}