#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,b;
signed main(void){
    exoworldgd;
    cin>>a>>b,cout<<(a=="H"&&b=="4567"?"safe unlocked":a=="H"?"safe locked - change digit":b=="4567"?"safe locked - change char":"safe locked");
}