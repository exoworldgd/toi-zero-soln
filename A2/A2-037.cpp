#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a;
signed main(void){
    exoworldgd;
    cin>>a;
    queue<string>b,c;
    while(a--){
        string d,e,f;
        cin>>d;
        if(d=="ARRIVE"){
            cin>>e>>f;
            if(f=="emergency")b.push(e);
            else c.push(e);
        }
        else if(d=="TREAT"){
            if(b.size())b.pop();
            else if(c.size())c.pop();
        }
        else{
            if(b.empty()&&c.empty())cout<<"EMPTY";
            else{
                queue<string>g=b,h=c;
                while(g.size())cout<<g.front()<<' ',g.pop();
                while(h.size())cout<<h.front()<<' ',h.pop();
            }
            cout<<'\n';
        }
    }
}