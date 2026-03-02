#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,b;
int c;
signed main(void){
    exoworldgd;
	cin>>a>>b>>c,cout<<(a=="BKK"&&b=="CNX"?to_string(10+30*c):a=="CNX"&&b=="UBP"?to_string(15+40*c):a=="UBP"&&b=="BKK"?to_string(20+40*c):a=="BKK"&&b=="PKT"?to_string(25+50*c):a=="PKT"&&b=="CNX"?to_string(30+60*c):a=="UBP"&&b=="PKT"?to_string(40+70*c):"Error");
}