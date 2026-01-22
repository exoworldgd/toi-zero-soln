#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
map<int,int>vs;
vector<int>s;
signed main(void){
    exoworldgd;
    for(int i=0,x;i<10;i++){
    	cin>>x;
    	if(!vs[x])vs[x]=1,s.push_back(x);
	}
    for(int i:s)cout<<i<<' ';
}