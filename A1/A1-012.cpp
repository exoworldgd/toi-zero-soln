#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b;
char c;
signed main(void){
    exoworldgd;
    cin>>a>>c,b=(a%10)*10+a/10,cout<<a<<' '<<(c^'+'?"* "+to_string(b)+" = "+to_string(a*b):"+ "+to_string(b)+" = "+to_string(a+b));
}