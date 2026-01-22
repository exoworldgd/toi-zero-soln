#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,q[105];
set<int>s;
signed main(void) {
    exoworldgd;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>q[i],q[i]+=q[i-1];
    for(int i=1;i<=n;i++)for(int j=i;j<=n;j++)s.insert(q[j]-q[i-1]);
    cout<<s.size();
}