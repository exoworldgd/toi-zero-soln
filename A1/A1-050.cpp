#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c;
signed main(void){
    exoworldgd;
    while(cin>>a){
    	if(a<0)break;
    	b+=a&1,c+=a&1^1;
	}
	cout<<b<<' '<<c<<' '<<b+c;
}