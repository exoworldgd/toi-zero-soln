#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
char a,b;
int x,y,z;
signed main(void){
    exoworldgd;
    cin>>a>>x>>b>>y>>z,cout<<((a=='H'?5:(a=='O'?3:2))*x+(b=='R'?(y==1?12:(y==2?18:25)):(b=='T'?(y==1?15:(y==2?20:30)):(y==1?10:(y==2?15:20))))*z);
}