#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,f;
long double b,c,d,e;
signed main(void){
    exoworldgd;
    cin>>a;
    for(;a--;cout<<'\n'){
        cin>>b>>c>>d,e=b+c+d,e=floor(e*10+0.5)/10,cout<<fixed<<setprecision(1)<<e,f=0;
        if(e>50)cout<<",Overloaded",f=1;
        if(b>20)cout<<(f?",":",")+string("Check Type Plastic"),f=1;
        if(c>20)cout<<(f?",":",")+string("Check Type Can"),f=1;
        if(d>20)cout<<(f?",":",")+string("Check Type Glass");
    }
}