#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int A,B,d,r,i,c;
signed main(void){
    exoworldgd;
    cin>>A>>B>>d>>r;
    for(i=A;i<=B;i++)c+=i%d==r;
    cout<<c;
}