#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a;
signed main(void){
    exoworldgd;
    cin>>a,cout<<(a<=1?35:35+5*(min(a,10ll)-1)+8*max(0ll,a-10));
}