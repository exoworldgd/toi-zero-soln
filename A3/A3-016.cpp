#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
const int N=1e5+5;
int n,m,res[N],rem[N],ok[N],cnt;
vector<int>con[N],on[N];
queue<int>q;
signed main(void){
    exoworldgd;
    cin>>n>>m,ok[1]=1,q.push(1);
    for(int i=0,k;i<m;i++){
        cin>>k,con[i].resize(k);
        for(int j=0;j<k;j++)cin>>con[i][j],on[con[i][j]].push_back(i);
        cin>>res[i],rem[i]=k;
    }
    while(q.size()){
    	int u=q.front();q.pop();
    	for(int v:on[u])if(!--rem[v]&&!ok[res[v]])ok[res[v]]=1,q.push(res[v]);
	}
    for(int i=1;i<=n;i++)cnt+=ok[i];
    cout<<cnt;
}