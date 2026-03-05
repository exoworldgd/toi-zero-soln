#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[200005],b[200005],c,d,e;
signed main(void){
    exoworldgd;
    while(1){
        cin>>d>>e;
        if(!e)break;
        a[c]=d,b[c++]=e;
    }
    if(c==1)return cout<<"1X",0;
    for(int f=c-1;f+1;f--)cout<<f+1<<(a[f+1]==b[f]?'P':'X')<<"\n";
}