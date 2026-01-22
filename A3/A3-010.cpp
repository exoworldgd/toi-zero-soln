#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,k,t,cnt,cur;
signed main(void){
	exoworldgd;
	cin>>n>>k>>t,t--;
	while(1){
		cnt++;
		if(cur==t)break;
		cur=(cur+k)%n;
		if(!cur)break;
	}
	cout<<cnt;
}