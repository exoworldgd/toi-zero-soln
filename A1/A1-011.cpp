#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s,x="";
char cur;
stack<pair<char,int>>st;
signed main(void){
    exoworldgd;
    cin>>s;
    for(char c:s)st.size()&&st.top().first==c?(st.top().second++):(st.emplace(c,1),0);
    for(int p;st.size();)cur=st.top().first,p=st.top().second,st.pop(),x=to_string(p)+cur+x;
    cout<<x;
}