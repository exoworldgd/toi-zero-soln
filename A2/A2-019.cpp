#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
string s;
signed main(void){
	exoworldgd;
    cin>>s;
    int n=s.size(),mx=0,bp=-1;
    for(int i=0;i<n;i++){
        if(toupper(s[i])=='B'){
            if(bp<0)bp=i;
            int c=0;
            for(int j=i+1;j<n&&toupper(s[j])=='U';j++)c++;
            if(c>=2)mx=max(mx,c);
        }
    }
    if(mx){cout<<"Yes "<<mx;return 0;}
    if(bp>=0){
        for(int i=0;i<=bp;i++)cout<<s[i];
        for(int i=bp+1;i<n;i++)cout<<'U';
    }else for(int i=0;i<n;i++)cout<<"BUU"[i%3];
}