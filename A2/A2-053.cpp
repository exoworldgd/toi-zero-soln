#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a[11],b,c,n;
string s;
char f,l;
signed main(void){
    exoworldgd;
    getline(cin,s);
    int n=s.size(),f=toupper(s.front()),l=toupper(s.back());
    for(b=1;b<=10;b++){
    	a[b]=(b&1?f+b-1:l-b+1)%n;
        if(a[b]<0)a[b]+=n;
        if(a[b]>9)a[b]%=10;
    }
    for(b=3;b<=8;b++)cout<<a[b]<<' ';
}