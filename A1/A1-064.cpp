#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,s;
char c;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>c,s+=(c=='+'?10:-5);
    cout<<s;
}