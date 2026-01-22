#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,k,cnt,idx=-1;
array<int,2>a[100005];
signed main(void){
	exoworldgd;
	cin>>n>>k;
	for(int i=0;i<n;i++)cin>>a[i][1]>>a[i][0];
	sort(a,a+n);
	for(int i=0;i<n;i++)if(a[i][1]>idx)cnt++,idx=a[i][0];
	cout<<cnt;
}