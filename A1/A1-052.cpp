#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a;
signed main(void){
    exoworldgd;
    cin>>a,(a%100||a>20000?(cout<<"ERROR",0):(!a?0:(a>=1000?(cout<<1000<<" = "<<a/1000<<'\n',a%=1000):0,a>=500?(cout<<500<<" = "<<a/500<<'\n',a%=500):0,a>=100?(cout<<100<<" = "<<a/100<<'\n',a%=100):0)));
}