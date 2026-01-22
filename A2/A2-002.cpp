#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,mx;
array<int,2>a[100005];
map<int,map<int,pair<set<array<int,2>>,array<int,2>>>>s1,s2;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i][0]>>a[i][1],s1[a[i][0]-a[i][1]][0].first.insert({a[i][0],i}),s2[1000000000-a[i][0]-a[i][1]][0].first.insert({a[i][0],i});
    for(auto&[id,m]:s1){
        auto&st=m[0].first;
        if(st.size())mx=max(mx,(*st.rbegin())[0]-(*st.begin())[0]);
    }
    for(auto&[id,m]:s2){
        auto&st=m[0].first;
        if(st.size())mx=max(mx,(*st.rbegin())[0]-(*st.begin())[0]);
    }
    cout<<mx;
}