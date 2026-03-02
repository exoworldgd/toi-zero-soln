#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a;
int b;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    for(char c:a)cout<<char((c-'a'+b)%26+'a');
}