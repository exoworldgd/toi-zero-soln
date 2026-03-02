#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n,a;
signed main(void){
    exoworldgd;
    while(cin>>n&&n!=5)a+=n==1?100:n==2?120:n==3?200:n==4?60:0;
    cout<<"Bye Bye\nTotal Calories: "<<a;
}