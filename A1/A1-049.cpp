#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string a,f;
int b=13,c,d,e;
signed main(void){
    exoworldgd;
    cin>>a,f=a,reverse(f.begin(),f.end());
    for(int e=0;e<5;e++)a[e]-'0'>5?(b=e+9,(e^4?0:b++),e=5):0;
    a==f?((a[0]-'0')+(a[4]-'0')>5?c=1:(a[1]-'0')*(a[3]-'0')>5?c=2:0):((a[4]-'0'>0)&&((a[0]-'0')%(a[4]-'0')>5)?c=1:(a[1]-'0')-(a[4]-'0')>5?c=2:0),(a[0]-'0')+(a[1]-'0')+(a[2]-'0')+(a[3]-'0')+(a[4]-'0')>25?d=1:(a[0]-'0')*(a[1]-'0')*(a[2]-'0')*(a[3]-'0')*(a[4]-'0')>25?d=2:0,cout<<b<<c<<d;
}