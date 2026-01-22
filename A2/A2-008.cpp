#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,c;
array<int,2>a[200005];
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i][0]>>a[i][1];
    sort(a,a+n);
    for(int i=1;i<n;i++)c+=a[i][1]<a[i-1][1],a[i][1]=max(a[i][1],a[i-1][1]);
    cout<<c;
}