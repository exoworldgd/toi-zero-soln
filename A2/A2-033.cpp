#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,b;
int h1,m1,h2,m2,t1,t2,d;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    if(a.find('.')==string::npos||b.find('.')==string::npos)return cout<<"ERROR",0;
    h1=stoll(a.substr(0,a.find('.'))),m1=stoll(a.substr(a.find('.')+1)),h2=stoll(b.substr(0,b.find('.'))),m2=stoll(b.substr(b.find('.')+1)),t1=h1*60+m1,t2=h2*60+m2;
    if(h1<0||h1>23||h2<0||h2>23||m1<0||m1>59||m2<0||m2>59||t1>=t2)return cout<<"ERROR",0;
    d=t2-t1;
    if(d<15)return cout<<"FREE",0;
    d=(d+59)/60,cout<<(d==1?25:d==2?50:d==3?80:d==4?110:d==5?145:d==6?180:250);
}