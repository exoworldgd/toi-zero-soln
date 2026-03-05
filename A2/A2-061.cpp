#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string t[4]={"CHE","LIV","MUN","NEW"};
int p[4],i,j,a,b,id[4]={0,1,2,3};
signed main(void){
    exoworldgd;
    for(i=0;i<4;i++)for(j=i+1;j<4;j++)cin>>a>>b,(a>b?p[i]+=3:a<b?p[j]+=3:(p[i]++,p[j]++));
    sort(id,id+4,[&](int x,int y){return p[x]^p[y]?p[x]>p[y]:t[x]<t[y];});
    for(i=0;i<4;i++)cout<<i+1<<". "<<t[id[i]]<<" "<<p[id[i]]<<"\n";
}