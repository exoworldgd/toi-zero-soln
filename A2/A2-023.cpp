#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
string s;
int mx,c,sr,sb,ok=1,cc,id,un=1;
signed main(void){
    exoworldgd;
    cin>>s;
    for(auto&i:s)i=toupper(i);
    for(auto&i:s){
        if(i!='I'&&i!='T')un=0;
        if(sb&&i!='I'&&i!='T'&&!cc){ok=0;break;}
        if(sr&&i!='A'&&!c){ok=0;break;}
        if(i=='R')sr=1,c=0;
        else if(i=='A'){
            if(!sr){ok=0;break;}
            c++,mx=max(mx,c);
        }else if(i=='B')sb=1,cc=0;
        else if((i=='I'||i=='T')&&sb)cc++;
        id++;
    }
    if(!ok||(sr&&!c)||(sb&&!cc))cout<<"no "<<min(id,(int)s.size()-1);
    else if(un)cout<<"unknown "<<s.size();
    else if(ok)cout<<"yes "<<mx;
}