#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
char a;
int b,c,d;
signed main(void){
    exoworldgd;
    cin>>a>>b>>c,cout<<(a=='M'?(d=1500+(b>=10?c/10:b>=5?c/100*8:c/100*6)):a=='B'?(d=1000+(b>=10?c/100*7:b>=5?c/100*6:c/100*5)):(d=500 +(b>=10?c/100*6:b>=5?c/100*5:c/100*4))),d;
}