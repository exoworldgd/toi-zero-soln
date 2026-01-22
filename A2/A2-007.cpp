#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
const int N=305;
vector<int>g[N],path[N],ans;
int up[N][10],t,depth[N],tin[N],tout[N],n,m,par[N],h[N],a[N],curr;
stack<pair<int,int>>s;
void dfs(int u,int p) {
    tin[u]=t++,up[u][0]=p;
    for(int i=1;i<10;i++)up[u][i]=up[up[u][i-1]][i-1];
    for(int v:g[u])depth[v]=depth[u]+1,dfs(v,u);
    tout[u]=t++;
}
bool yes(int u,int v) {return tin[u]<=tin[v]&&tout[v]<=tout[u];}
int lca(int u,int v) {
    if(depth[u]<depth[v])swap(u,v);
    for(int i=0;i<10;i++)if((depth[u]-depth[v])&(1<<i))u=up[u][i];
    if(u==v)return u;
    for(int i=9;i+1;i--)if(up[u][i]^up[v][i])u=up[u][i],v=up[v][i];
    return up[u][0];
}
signed main(void) {
    exoworldgd;
    cin>>n>>m,s.emplace(INT_MAX,0);
    for(int i=1,l,r;i<=n;i++) {
    	cin>>l>>r;
    	while(l>=s.top().first)s.pop();
    	path[s.top().second].push_back(i),s.push({r,i});
	}
	for(int u=1;u<=n;u++)for(int v:path[u])g[u].push_back(v);
	for(int i=1;i<=n;i++)if(!up[i][0])depth[i]=0,dfs(i,0);
    for(int i=0;i<m;i++)cin>>a[i];
    sort(a,a+m,[&](int x,int y){return tin[x]<tin[y];}),curr=a[0];
    for(int i=1,w1,w2;i<m;i++)w1=a[i],w2=lca(curr,w1),w2?curr=w2:(ans.push_back(curr),curr=w1);
	ans.push_back(curr),sort(ans.begin(),ans.end()),cout<<ans.size()<<'\n';
	for(int i:ans)cout<<i<<" ";
}