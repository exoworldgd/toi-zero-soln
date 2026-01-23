#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
signed main(void){
    exoworldgd;
    int n,d;
    cin>>n>>d,n+=d>=21,n=(n==13?1:n),cout<<(n<=3?"winter":n<=6?"spring":n<=9?"summer":"fall");
}