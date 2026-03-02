#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
double a,b=0,c;
signed main(void){
    exoworldgd;
	cin>>a,cout<<fixed<<setprecision(2)<<((c=a*0.5),(b+=5*min(a,(double)10)),a-=min(a,(double)10),(b+=7*min(a,(double)40)),a-=min(a,(double)40),(b+=10*min(a,(double)50)),a-=min(a,(double)50),(b+=12*min(a,(double)100)),a-=min(a,(double)100),(a>0?b+=15*a:0),(b*=1.07),b+c);
}