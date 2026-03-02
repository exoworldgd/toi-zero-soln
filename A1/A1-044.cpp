#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string b;
int a,c;
signed main(void){
	exoworldgd;
	cin>>a>>b,c=(a<5?0:a>18?150:100),cout<<(b=="Wed"?c/2:c);
}