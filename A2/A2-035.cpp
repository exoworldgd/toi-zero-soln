#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,cnt;
char a[15];
void dfs(int p){
    if(p==n){
        for(int i=0;i<n;i++)cout<<a[i]<<' ';
        cout<<'\n',cnt++;return;
    }
    for(int i=p;i<n;i++)swap(a[p],a[i]),dfs(p+1),swap(a[p],a[i]);
}
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    dfs(0),cout<<cnt;
}