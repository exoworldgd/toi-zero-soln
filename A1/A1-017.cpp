#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a1,a2,b1,b2,c1,c2;
signed main(void){
    exoworldgd;
    cin>>a1>>b1>>c1>>a2>>b2>>c2,cout<<(a1==a2&&b1==b2&&c1==c2?0:a1>a2?2:a2>a1?1:b2>b1?1:b1>b2?2:c2>c1?1:2);
}