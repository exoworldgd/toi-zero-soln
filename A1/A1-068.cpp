#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d;
long double e;
signed main(void){
    exoworldgd;
    cin>>a;
    for(int i=0;i<a;i++)cin>>b,c+=b,d|=b<50;
    e=(long double)c/a,e=floor(e*10+0.5)/10,cout<<fixed<<setprecision(1)<<e<<"\n"<<(!d&&e>=60?"PASS":"FAIL");
}