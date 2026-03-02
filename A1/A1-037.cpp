#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n;
signed main(void){
    exoworldgd;
    cin>>n;
    vector<pair<int,string>> r={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}};
    for(auto[v,s]:r)while(n>=v)cout<<s,n-=v;
}