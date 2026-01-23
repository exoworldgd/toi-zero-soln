#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
signed main(void){
    exoworldgd;
    int n;
    char k;
    cin>>n>>k,cout<<(toupper(k)^'S'&&n>18?50:20);
}