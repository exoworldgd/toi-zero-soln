#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int a;
signed main(void){
    exoworldgd;
    cin>>a,cout<<((!(a%400)||a==1500||(!(a%4)&&a%100))?"yes":"no");
}