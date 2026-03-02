#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a;
char b;
signed main(void){
    exoworldgd;
    cin>>a>>b,cout<<(((b=toupper(b))=='F'?(a-32)*5.0/9.0:a)<=0?"solid":((b=='F'?(a-32)*5.0/9.0:a)<100?"liquid":"gas"));
}