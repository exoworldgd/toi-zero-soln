#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,c;
signed main(void){
    exoworldgd;
    cin>>n;
    for(char i;n--;)cin>>i,c+=i=='A'||i=='E'||i=='I'||i=='O'||i=='U';
    cout<<c;
}