#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c;
signed main(void){
    exoworldgd;
    cin>>a;
    while(cin>>b>>c)cout<<(b<15?-1:c>a?-2:(a-=c,c*150*(b>=60?50:b<=22?80:100)/100))<<"\n";
}