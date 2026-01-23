#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,w,l;
signed main(void){
    exoworldgd;
    cin>>n>>w>>l;
    set<int>ans;
    for(int i=0,k;i<n;i++){
        cin>>k;
        set<int>cur;
        for(int j=0,p;j<k;j++){
            cin>>p;
            for(int s=-l;s<=l;s++)cur.insert(p+s);
        }
        if(!i)ans=cur;
        else{
            set<int>tmp;
            set_intersection(ans.begin(),ans.end(),cur.begin(),cur.end(),inserter(tmp,tmp.begin())),ans=tmp;
        }
        if(ans.empty()){cout<<0;return 0;}
    }
    cout<<1;
}