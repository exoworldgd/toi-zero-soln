#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0), cout.tie(0)
#define int long long
using namespace std;
int n,k,a[100005],x,cnt=1;
signed main(void) {
    exoworldgd;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n),x=k*a[0];
    for(int i=1;i<n;i++)cnt+=ceil((double)x/a[i])==k;
    cout<<cnt;
}