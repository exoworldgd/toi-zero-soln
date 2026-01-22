#pragma GCC optimize("Ofast,unroll-loops,inline,fast-math,omit-frame-pointer")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt,tune=native,fma")
#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int w,h,m,n,x[1005],y[1005];
signed main(void){
	exoworldgd;
	cin>>w>>h>>m>>n,x[0]=y[0]=0,x[m+1]=w,y[n+1]=h;
	for(int i=1;i<=m;i++)cin>>x[i];
	for(int i=1;i<=n;i++)cin>>y[i];
	vector<int>v;
	for(int i=0;i<=m;i++)for(int j=0;j<=n;j++)v.push_back((x[i+1]-x[i])*(y[j+1]-y[j]));
	sort(v.rbegin(),v.rend()),cout<<v[0]<<" "<<v[1];
}