#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b;
signed main(void){
    exoworldgd;
    cin>>a>>b,cout<<(a<=1990?(b<=1500?1250:b<=2000?1400:2000):a<=1999?(b<=1500?1100:b<=2000?1300:1700):(b<=1500?1000:b<=2000?1200:1500));
}