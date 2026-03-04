#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d,e,f;
signed main(void){
    exoworldgd;
    cin>>a,cout<<"Input number 1 stored.\n",cin>>b,cout<<"Input number 2 stored.\n",cin>>c,cout<<"Input number 3 stored.\n",cin>>d;
    if(d==1)cout<<"Original order: "<<a<<' '<<b<<' '<<c;
    else if(d==2){
        e=a,f=b;
        if(e<f)swap(e,f);
        if(e<c)swap(e,c);
        if(f<c)swap(f,c);
        cout<<"Descending order: "<<e<<' '<<f<<' '<<c;
    }
    else if(d==3){
        e=a,f=b;
        if(e>f)swap(e,f);
        if(e>c)swap(e,c);
        if(f>c)swap(f,c);
        cout<<"Ascending order: "<<e<<' '<<f<<' '<<c;
    }
}