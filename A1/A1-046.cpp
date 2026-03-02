#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
#define int long long
using namespace std;
int n,s,c1,c2;
signed main(void){
    exoworldgd;
    cin>>n;
    for(int i=0,x;i<n;i++)cin>>x,s+=x,x&1?c1++:c2++;
    cout<<"SUM "<<s<<"\nEVEN "<<c2<<"\nODD "<<c1;
}