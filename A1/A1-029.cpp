#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s;
int c;
signed main(void){
    exoworldgd;
    cin>>s;
    for(char i:s)c+=i=='a'||i=='e'||i=='i'||i=='o'||i=='u';
    cout<<c;
}