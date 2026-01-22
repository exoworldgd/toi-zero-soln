#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int N,lit[360],ans;
signed main(void){
	exoworldgd;
	cin>>N;
	for(int i=0,a,b;i<N;i++){
		cin>>a>>b;
		if(a<=b)for(int j=a;j<b;j++)lit[j]=1;
		else for(int j=a;j<360;j++){
			lit[j]=1;
			for(int j=0;j<b;j++)lit[j]=1;
		}
	}
	int cnt=0,mx=0;
	for(int i=0;i<720;i++){
		if(lit[i%360])cnt++,mx=max(mx,cnt);
		else cnt=0;
	}
	cout<<(mx>=360?360:mx);
}