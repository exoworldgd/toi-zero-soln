#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
signed main(void){
    exoworldgd;
    queue<string>a;
    map<string,int>b;
    vector<string>c;
    string d;
    while(getline(cin,d)){
        a.push(d);
        if(d=="END")break;
    }
    while(a.size()){
        string e=a.front(),g,h;a.pop();
        if(e=="END")break;
        stringstream f(e);
        int i;
        f>>g;
        if(g=="ADD")f>>h>>i,b[h]+=i;
        else if(g=="REMOVE"){
            f>>h>>i;
            if(b[h]<i){
                if(b[h]>0)b[h]=0;
                c.push_back("Not enough stock for "+h);
            }else b[h]-=i;
        }
        else if(g=="CHECK"){
            bool j=0;
            for(auto&k:b)if(k.second<5)c.push_back(k.first+": "+to_string(k.second)),j=1;
            if(!j)c.push_back("All stocks are sufficient");
        }
        else if(g=="REPORT")for(auto &k:b)c.push_back(k.first+": "+to_string(k.second));
    }
    for(auto&l:c)cout<<l<<'\n';
}