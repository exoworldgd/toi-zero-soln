#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b;
signed main(void){
    exoworldgd;
    cin>>a>>b,cout<<((b==12&&a>=22)||(b==1&&a<=19)?"capricorn":(b==1&&a>=20)||(b==2&&a<=18)?"aquarius":(b==2&&a>=19)||(b==3&&a<=20)?"pisces":(b==3&&a>=21)||(b==4&&a<=19)?"aries":(b==4&&a>=20)||(b==5&&a<=20)?"taurus":(b==5&&a>=21)||(b==6&&a<=21)?"gemini":(b==6&&a>=22)||(b==7&&a<=22)?"cancer":(b==7&&a>=23)||(b==8&&a<=22)?"leo":(b==8&&a>=23)||(b==9&&a<=22)?"virgo":(b==9&&a>=23)||(b==10&&a<=23)?"libra":(b==10&&a>=24)||(b==11&&a<=21)?"scorpio":(b==11&&a>=22)||(b==12&&a<=21)?"sagittarius":"");
}