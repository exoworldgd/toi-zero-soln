#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,a[100005];
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<*min_element(a,a+n);
}