#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a;
signed main(void){
    exoworldgd;
    cin>>a;
    for(int i=0;i<a.size();i++)cout<<a[i]<<(i==a.size()-4?",":"");
}