#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s;
int i,a,e,I,o,u;
signed main(void){
    exoworldgd;
    getline(cin,s);
    for(i=0;i<s.size();i++)tolower(s[i])=='a'?a++:tolower(s[i])=='e'?e++:tolower(s[i])=='i'?I++:tolower(s[i])=='o'?o++:tolower(s[i])=='u'?u++:0;
    if(a)cout<<"a: "<<a<<"\n";
    if(e)cout<<"e: "<<e<<"\n";
    if(I)cout<<"i: "<<I<<"\n";
    if(o)cout<<"o: "<<o<<"\n";
    if(u)cout<<"u: "<<u;
}