#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
signed main(void){
    exoworldgd;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<ceil(n/2.0);i++,cout<<'\n')for(int j=0;j<m;j++)cout<<"A ";
    for(int i=0;i<n>>1;i++,cout<<'\n')for(int j=0;j<m;j++)cout<<"K ";
}