#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int W,L,M,N,ans;
int calc(int A){
	int h=L/A,used1=h*A*W,rem=L-h*A;
	if(!rem)return W*L-used1;
	int w=W/A,used2=w*A*rem;
	return W*L-used1-used2;
}
signed main(void){
	exoworldgd;
	cin>>W>>L>>M>>N,ans=W*L;
	for(int A=M;A<=N;A++)ans=min(ans,calc(A));
	cout<<ans;
}
