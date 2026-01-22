#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,a,b;
signed main(void) {
    exoworldgd;
    cin>>n;
    for(int i=0,x;i<n;i++)cin>>x,x>18?a++:b++;
    cout<<max(0ll,a-b-1)+n;
}