#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[1445],b,c,d,e,f,g;
signed main(void){
    exoworldgd;
    cin>>b>>c;
    memset(a,0,sizeof a);
    for(d=0;d<b;d++)cin>>f>>g,a[f]++,a[g+1]--;
    for(d=1;d<=1440;d++)a[d]+=a[d-1];
    for(d=0;d<c;d++)cin>>e,cout<<a[e]<<' ';
}