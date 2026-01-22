#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,k,mn,mx;
signed main(void) {
    exoworldgd;
    cin>>n>>k;
    for(int i=0,x;i<n;i++){
    	cin>>x;
    	if(!(x%3)&&x%4)mn+=x/3*10,mx+=x/3*10;
    	else if(x%3&&!(x%4))mn+=x/4*10,mx+=x/4*10;
    	else mn+=min(x/3*10,x/4*10),mx+=max(x/3*10,x/4*10);
	}
	cout<<k-mx<<' '<<k-mn;
}