#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<3;i++,cout<<'\n')for(int j=0;j<n-2*i;j++)cout<<'*';
}