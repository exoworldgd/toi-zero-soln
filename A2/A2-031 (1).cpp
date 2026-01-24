#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,m,a,b,mis;
char s1[200005],s2[200005],c;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>s1[i];
    for(int i=0;i<n;i++)cin>>s2[i];
    cin>>m;
    while(m--)cin>>a>>b>>c,a==1?s1[b]=c:s2[b]=c;
    for(int i=0;i<n;i++)cout<<s1[i]<<(i+1<n?' ':'\n');
    for(int i=0;i<n;i++)cout<<s2[i]<<(i+1<n?' ':'\n');
    for(int i=0;i<n;i++)mis+=!((s1[i]^s2[i])==21||(s1[i]^s2[i])==4);
    cout<<mis;
}