#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s;
signed main(void){
    exoworldgd;
    cin>>s,reverse(s.begin(),s.end());
    for(char c:s)cout<<char(tolower(c));
}