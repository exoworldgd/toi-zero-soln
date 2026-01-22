#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
char a,b,c;
int mp[256][256],k;
signed main(void){
    exoworldgd;
    cin>>a>>b>>c,mp['S']['R']=60,mp['S']['T']=mp['M']['R']=80,mp['M']['T']=mp['L']['R']=100,mp['L']['T']=120,c^'N'?(cin>>k,cout<<mp[a][b]+(c=='P'?15:10)*k):cout<<mp[a][b];
}