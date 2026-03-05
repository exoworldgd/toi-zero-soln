#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d[15][25],e,f,g,h;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    if(a<1||a>10||b<1||b>20)return cout<<"Data Incorrect",0;
    for(c=0;c<a;c++)for(e=0;e<b;e++){
        cin>>d[c][e];
        if(d[c][e]<0||d[c][e]>100)return cout<<"Data Incorrect",0;
    }
    for(c=0;c<a;c++){
        f=0,g=d[c][0];
        for(e=0;e<b;e++)f+=d[c][e],g=max(g,d[c][e]);
        cout<<"Team "<<c+1<<": Average = "<<fixed<<setprecision(2)<<(double)f/b<<", Max = "<<g<<"\n",e+=f;
    }
    for(c=0;c<a;c++)for(f=0;f<b;f++)h+=d[c][f];
    cout<<"Total Score of All Teams = "<<h;
}