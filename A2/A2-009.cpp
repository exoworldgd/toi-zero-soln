#pragma GCC optimize("Ofast,unroll-loops,inline,fast-math,omit-frame-pointer")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt,tune=native,fma")
#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int N,C,m[35][35],used;
int sim(vector<int>v){
	if(v.size()==1)return v[0];
	vector<int>w;
	for(int i=0;i<v.size();i+=2){
		int a=v[i],b=v[i+1],wn=m[a][b];
		if(!used&&C&&(a==C||b==C)){
			int l=(a==C)?a:b;
			if(wn^l)used=1,wn=l;
		}
		w.push_back(wn);
	}
	return sim(w);
}
signed main(void){
	exoworldgd;
	cin>>N>>C;
	for(int i=1;i<=N;i++)for(int j=1;j<=N;j++)cin>>m[i][j];
	vector<int>v;
	for(int i=1;i<=N;i++)v.push_back(i);
	cout<<sim(v);
}