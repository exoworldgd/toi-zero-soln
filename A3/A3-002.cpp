#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k;
signed main(void) {
    exoworldgd;
    cin>>n;
    for(;k*k<n;k++);
    cout<<2*(k-1)-(n&1^k&1);
}