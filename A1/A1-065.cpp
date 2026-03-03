#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a;
signed main(void){
    exoworldgd;
    for(int b=0;b<5;b++){
        cin>>a;
        if(a=="0"){cout<<"-";continue;}
        while(a.size()<4)a='0'+a;
        cout<<(a[0]>'0'?"#":"")<<(a[1]>'0'?"/":"")<<(a[2]>'0'?"+":"")<<(a[3]>'0'?"*":"");
    }
}