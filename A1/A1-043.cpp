#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
float a,b,c,t;
signed main(void){
    exoworldgd;
	cin>>a>>b>>c,t=(a+b)*(c>3?1.5:1.0),cout<<((float)((int)t)==t?to_string((int)t):((ostringstream&)(ostringstream()<<fixed<<setprecision(1)<<t)).str())<<'\n'<<(t>=1500?5:t>=1000?4:t>=500?3:t>=200?2:1)<<'\n'<<((t>=1500?5:t>=1000?4:t>=500?3:t>=200?2:1)==5&&c>=7?99:(t>=1500?5:t>=1000?4:t>=500?3:t>=200?2:1)==4&&b>300?88:0);
}