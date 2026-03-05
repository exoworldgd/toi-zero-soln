#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,d,i,j,x,a[10],mx,f,l;
double s;
string h[6]={"","TechTrends","EcoLife","FoodieHeaven","FashionWeek","HealthyLiving"};
signed main(void){
    exoworldgd;
    cin>>n>>d;
    for(i=0;i<n;i++){
        cin>>x,s=0;
        for(j=0;j<d;j++)cin>>a[j],s+=a[j],!j?f=a[j]:0,j==d-1?l=a[j]:0;
        cout<<h[x]<<": "<<(int)s<<" total, "<<fixed<<setprecision(2)<<s/d<<" avg, "<<(l>f?"GROWING":l<f?"DECLINING":"STABLE")<<"\n";
        if(s>mx)mx=s,a[9]=x;
    }
    cout<<"Top performer: "<<h[a[9]];
}