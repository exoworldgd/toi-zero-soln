#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
string a,b;
int i1,i2,c,s,mx;
signed main(void){
    exoworldgd;
    cin>>a>>b;
    while(a.size()<b.size())a+=a[i1++];
    while(b.size()<a.size())b+=b[i2++];
    for(int i=0;i<a.size();i++)a[i]=tolower(a[i]),b[i]=tolower(b[i]),(a[i]=='l'||a[i]=='o'||a[i]=='v'||a[i]=='e'||b[i]=='l'||b[i]=='o'||b[i]=='v'||b[i]=='e')?(c++,s++,mx=max(mx,s),cout<<'w',0):(cout<<'$',s=0,0);
    cout<<(c&1?to_string(mx):mx<2?"#":"");
}