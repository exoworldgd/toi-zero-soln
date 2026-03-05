#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[105],b,c,d;
string e;
signed main(void){
    exoworldgd;
    cin>>b;
    for(c=0;c<b;c++){
        cin>>a[c];
        if(a[c]==1)d=c;
    }
    cin>>e;
    for(char f:e){
        int g=d;
        g+=(f^'L'?1:-1);
        if(g<0||g>=b)continue;
        if(a[g]==2){d=g;break;}
        d=g;
    }
    for(c=0;c<b;c++)if(a[c]==1)a[c]=0;
    a[d]=1;
    for(c=0;c<b;c++)cout<<a[c]<<' ';
}