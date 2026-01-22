#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,a[305],b[305],x=1,y=1,cnt;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        int xx=a[i],yy=b[i],p=x,pp=xx,q=y,qq=yy;
        if(p>pp)swap(p,pp);
        if(q>qq)swap(q,qq);
		cnt+=(p==q&&pp==qq)||(p^q&&p^qq&&pp^q&&pp^qq&&(p<q&&pp>q&&pp<qq||q<p&&qq>p&&qq<pp)),x=xx,y=yy;
    }
    cout<<cnt;
}