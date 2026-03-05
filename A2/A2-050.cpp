#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c,ok,t;
char k,x;
signed main(void){
    exoworldgd;
    cin>>a>>k,k=toupper(k);
    int m=a/2;
    for(b=0;b<a;b++,cout<<'\n'){
        for(c=0;c<a;c++){
        	ok=(a&1?abs(b-m)+abs(c-m)==m:c==m-1-min(b,a-1-b)||c==m+min(b,a-1-b));
            if(ok){
                if(k=='#')cout<<'#';
                else{
                    t=min(abs(b-(a-1)/2),abs(b-a/2)),x=k+t;
                    if(x>'Z')x='Z'-(x-'Z');
                    cout<<x;
                }
            }
            else cout<<'-';
        }
    }
}