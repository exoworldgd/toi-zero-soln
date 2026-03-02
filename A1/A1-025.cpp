#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s;
char k;
signed main(void){
    exoworldgd;
    cin>>s,k=s.back(),cout<<((s=s.substr(0,s.size()-1))=="Q"||s=="q"?"queen":s=="J"||s=="j"?"jack":s=="A"||s=="a"?"ace":s=="K"||s=="k"?"king":s)<<" of "<<((toupper(k)=='D')?"diamonds":k=='H'?"hearts":k=='S'?"spades":"clubs");
}