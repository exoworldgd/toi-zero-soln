#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int l,p,r,m,f,sr,sm,sf;
map<int,int>pt;
signed main(void){
    exoworldgd;
    cin>>l>>p>>r>>m>>f;
    for(int i=0,pos,sc;i<p;i++)cin>>pos>>sc,pt[pos]=sc;
    for(int i=r;i<=l;i+=r)if(pt[i])sr+=pt[i];
    for(int i=m;i<=l;i+=m)if(pt[i])sm+=pt[i];
    for(int i=f;i<=l;i+=f)if(pt[i])sf+=pt[i];
    int mx=max({sr,sm,sf});
    if(sr==mx)cout<<"Rabbit "<<sr<<'\n';
    if(sm==mx)cout<<"Monkey "<<sm<<'\n';
    if(sf==mx)cout<<"Frog "<<sf<<'\n';
}