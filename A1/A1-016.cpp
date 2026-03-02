#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a;
signed main(void){
    exoworldgd;
    cin>>a,cout<<(a[2]^'1'||a[3]^'6'?"no":"yes");
}