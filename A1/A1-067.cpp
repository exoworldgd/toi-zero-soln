#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
char a;
double b,c,d;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    for(int i=0;i<b;i++)cin>>c,d+=c;
    d*=a=='Y'?0.95:(a=='N'&&d>=500?0.97:1),d=round((d+1e-12)*100)/100,cout<<fixed<<setprecision(2)<<d;
}