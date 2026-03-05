#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[55][55],b,c,d,e,f,g,h,col1[55],col2[55];
double p;
signed main(void){
    exoworldgd;
    cin>>b>>p;
    for(c=0;c<b;c++)for(d=0;d<b;d++)cin>>a[c][d];
    for(c=0;c<b;c++){
        int cnt=0,sum=0;
        for(d=0;d<b;d++)cout<<a[c][d]<<" ",cnt+=(a[c][d]?1:0),sum+=a[c][d],col1[d]+=(a[c][d]?1:0),col2[d]+=a[c][d];
        cout<<cnt<<" "<<sum<<"\n",e+=cnt,f+=sum;
    }
    for(c=0;c<b;c++)cout<<col1[c]<<' ';
    cout<<"\n";
    for(c=0;c<b;c++)cout<<col2[c]<<' ';
    cout<<"\n"<<e<<" "<<f<<" "<<fixed<<setprecision(2)<<f*p;
}