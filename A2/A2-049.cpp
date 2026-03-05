#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int a[3][3],b[3][3],c[3][3],M=32777;
signed main(void){
    exoworldgd;
    for(auto&i:a)for(auto&j:i)cin>>j; 
    for(auto&i:b)for(auto&j:i)cin>>j;
    for(int i=0;i<3;i++)for(int j=0;j<3;j++){
    	int s=0;
    	for(int k=0;k<3;k++)s+=a[i][k]*b[k][j];
    	c[i][j]=((s%M)+M)%M;
    }
    for(int i=0;i<3;i++,cout<<'\n')for(int j=0;j<3;j++,cout<<' ')cout<<c[i][j];
}