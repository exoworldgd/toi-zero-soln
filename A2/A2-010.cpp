#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
const int N=1e5+5;
int n,q,d,p[N],sz[N],on[N],mx,cnt;
array<int,2>s[N],ev[N],a[N];
map<int,int>mp;
int f(int x){return p[x]=p[x]==x?x:f(p[x]);}
void unite(int x,int y){
	x=f(x),y=f(y);
	if(x^y)p[y]=x,sz[x]+=sz[y];
}
signed main(void){
	exoworldgd;
	cin>>n>>q,iota(p,p+n,0);
	for(int i=0,u,v;i<n;i++)cin>>u>>v,d+=u,s[i]={d,v},ev[i]={d,i},sz[i]=v;
	sort(ev,ev+n,greater<>());
	for(int i=0;i<n;i++){
		on[ev[i][1]]=1;
		if(ev[i][1]>0&&on[ev[i][1]-1])unite(ev[i][1],ev[i][1]-1);
		if(ev[i][1]<n-1&&on[ev[i][1]+1])unite(ev[i][1],ev[i][1]+1);
		mx=max(mx,sz[f(ev[i][1])]);
		if(mp.find(mx)==mp.end())mp[mx]=ev[i][0];
	}
	for(auto[w,d]:mp)a[cnt++]={w,d};
	for(int i=cnt-2;i+1;i--)a[i][1]=max(a[i][1],a[i+1][1]);
	for(int w,ans,l,r;q--;){
		cin>>w,l=ans=0,r=cnt-1;
		for(int md;l<=r;)md=(l+r)>>1,a[md][0]<w?l=md+1:(ans=a[md][1],r=md-1);
		cout<<ans<<'\n';
	}
}