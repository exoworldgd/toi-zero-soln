#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,a[15];
signed main(void){
    exoworldgd;
    cin>>n,iota(a,a+n,1),cout<<accumulate(a,a+n,1,multiplies<int>());
}