#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n;
signed main(void){
    exoworldgd;
    cin>>n,cout<<"10 = "<<n/10<<'\n',n%=10,cout<<"5 = "<<n/5<<'\n',n%=5,cout<<"2 = "<<n/2<<'\n',n&=1,cout<<"1 = "<<n;
}