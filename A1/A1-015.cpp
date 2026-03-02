#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,b,c;
signed main(void){
    exoworldgd;
    cin>>a>>b>>c,cout<<((a.size()>5&&b.size()>5)?string()+a[0]+a[1]+b.back()+c.back():string()+a[0]+c+b.back());
}