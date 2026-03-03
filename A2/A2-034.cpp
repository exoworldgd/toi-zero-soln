#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[100005],b,c,N=100000;
signed main(void){
    exoworldgd;
	cin>>b,memset(a,1,sizeof a),a[0]=a[1]=0;
	for(int d=2;d*d<=N;d++)if(a[d])for(int e=d*d;e<=N;e+=d)a[e]=0;
	if(a[b]){cout<<"Yes\n";for(int d=2;d<=b;d++)if(a[d])cout<<d<<' ';}
	else cout<<"No";
}