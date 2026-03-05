#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a,b,c[15],d,e,f;
signed main(void){
    exoworldgd;
    cin>>a;
    for(b=0;b<a;b++)cin>>c[b];
    cout<<"Student: ";
    for(b=0;b<a;b++)cout<<"Student"<<b+1<<": ";
    cout<<"\n";
    if(a){
        d=e=c[0];
        for(b=0;b<a;b++)d=max(d,c[b]),e=min(e,c[b]),f+=c[b];
        cout<<"Highest score: "<<d<<"\n"<<"Lowest score: "<<e<<"\n"<<"Average score: "<<fixed<<setprecision(1)<<(double)f/a<<"\nStudents who scored above average:\n";
        for(b=0;b<a;b++)if(c[b]>(double)f/a)cout<<"Student "<<b+1<<"\n";
    }
    else cout<<"Highest score: 0\nLowest score: 0\nAverage score: 0.0\nStudents who scored above average:\n";
}