#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k,a[100005],c,l,r;
map<int,int>mp;
signed main(void){
    exoworldgd;
    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
		mp[a[i]]++,r+=mp[a[i]]==1;
    	while(r>=k)mp[a[l]]--,r-=!mp[a[l]],l++;
    	c+=i-l+1;
	}
	cout<<n*(n+1)/2-c;
}