#include <bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
string a[3]={"Red","Green","Blue"};
char k;
int n;
signed main(void){
    exoworldgd;
    cin>>k>>n;
    for(int i=0;i<n;i++)cout<<a[((k=='R'?0:k=='G'?1:2)+i)%3]<<' ';
}