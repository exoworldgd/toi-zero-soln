#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int N,L,H[100005],A[105];
signed main(void){
	exoworldgd;
	cin>>N>>L;
	for(int i=1;i<=N;i++)cin>>H[i];
	for(int i=0;i<L;i++)cin>>A[i];
	for(int i=0;i<L;i++){
		int pos=A[i],mx=0;
		for(int j=1;j<pos;j++)mx=max(mx,H[j]);
		cout<<max(0LL,mx-H[pos]+1)<<"\n";
	}
}