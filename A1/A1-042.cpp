#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a;
int b,c;
signed main(void){
	exoworldgd;
	cin>>a;
	for(int d=0;d<a.size();d++)b-=a[d]=='S',b+=a[d]=='N',c+=a[d]=='E',c-=a[d]=='W';
	cout<<c<<' '<<b<<' '<<abs(b)+abs(c);
}