#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
double a[1005],med,s,mx=-1e18,mn=1e18;
int n,i,alert;
signed main(void){
    exoworldgd;
    cin>>n;
    for(i=0;i<n;i++)cin>>a[i],s+=a[i],mx=max(mx,a[i]),mn=min(mn,a[i]),alert+=a[i]>=37.0;
    sort(a,a+n),med=(n&1?a[n>>1]:(a[n/2-1]+a[n>>1])/2.0),cout<<fixed<<setprecision(2)<<"SUM="<<s<<"\nAVG="<<s/n<<"\nMEDIAN="<<med<<"\nMAX="<<mx<<"\nMIN="<<mn<<"\nALERT="<<alert<<"\nSORTED=";
    for(i=0;i<n;i++)cout<<a[i]<<' ';
}