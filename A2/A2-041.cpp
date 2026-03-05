#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b;
string c,d,e="0123456789ABCDEF";
signed main(void){
    exoworldgd;
    cin>>a;
    if(!a)c=d="0";
    else{
        for(b=a;b;b>>=1)c=char('0'+b%2)+c;
        for(b=a;b;b>>=3)d=char('0'+b%8)+d;
    }
    string f;
    if(!a)f="0";
    else for(b=a;b;b/=16)f=e[b%16]+f;
    cout<<c<<'\n'<<d<<'\n'<<f;
}