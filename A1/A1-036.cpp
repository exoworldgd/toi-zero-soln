#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n;
signed main(void){
    exoworldgd;
    cin>>n,n-=n%10;
    while(n+10)cout<<n<<' ',n-=10;
}