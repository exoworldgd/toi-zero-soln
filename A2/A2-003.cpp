#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int a[1000005],n,c;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)c+=a[i]>a[i-1]&&a[i]>a[i+1];
    cout<<c;
}