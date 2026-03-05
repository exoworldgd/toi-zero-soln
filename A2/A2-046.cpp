#include<bits/stdc++.h>
#define int long long
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
bool f(char c){
    c=tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
signed main(void){
    exoworldgd;
    int t;
    cin>>t;
    cin.ignore();
    for(int i=1,a,b,c;i<=t;i++){
        string s;
        getline(cin,s),a=b=c=0;
        for(char d:s)f(d)?(a++,b++,c=max(c,b)):b=0;
        cout<<"Line "<<i<<": vowels = "<<a<<", max_consecutive = "<<c<<"\n";
    }
}