#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,e,o;
signed main(void){
    exoworldgd;
    cin>>a>>b>>c,o+=a&1,e+=~a&1,o+=b&1,e+=~b&1,o+=c&1,e+=~c&1,cout<<"even "<<e<<"\nodd "<<o;
}