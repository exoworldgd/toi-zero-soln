#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,d,e;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    for(e=a;e>0;e-=2){
        c+=e,d++;
        if(c>=b)return cout<<d,0;
    }
    cout<<-1;
}