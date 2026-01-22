#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
char x,y;
string a,b;
int k;
signed main(void){
    exoworldgd;
    cin>>x>>a>>y>>b,reverse(a.begin(),a.end()),reverse(b.begin(),b.end());
    while(a[k]==b[k]&&k<5)k++;
    cout<<(x==y&&k==5?1000000:k==5?100000:k>=3&&x==y?2000:k>=2&&x==y?1000:k>=3?200:k>=2?100:x==y?20:0);
}