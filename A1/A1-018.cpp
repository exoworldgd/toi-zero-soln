#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int n;
signed main(void){
    exoworldgd;
    cin>>n,cout<<(n==1?"I":n==2?"II":n==3?"III":n==4?"IV":n==5?"V":n==6?"VI":n==7?"VII":n==8?"VIII":n==9?"IX":n<0?"Error : Please input positive number":"Error : Out of range");
}
