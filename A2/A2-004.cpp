#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int a[100005],n;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0,x;i<n;i++)cin>>x,a[x]++;
    cout<<*max_element(a,a+n);
}