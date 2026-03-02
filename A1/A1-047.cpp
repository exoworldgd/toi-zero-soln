#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b;
signed main(void){
    exoworldgd;
    cin>>a>>b,a*=b,cout<<(!a?"No teaching":(a/60?to_string(a/60)+" hours":"")+(a/60&&a%60?" ":"")+(a%60?to_string(a%60)+" minute":""));
}