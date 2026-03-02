#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
float a,b,c;
signed main(void){
    exoworldgd;
	cin>>a>>b>>c,cout<<(a+b+c>2?(int)floor((a*25+b*40+c*55)*.9):(int)round(a*25+b*40+c*55));
}