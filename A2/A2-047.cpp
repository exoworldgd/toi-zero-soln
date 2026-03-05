#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
bool chk(string s,string w){
    for(int i=0;i<=int(s.size())-int(w.size());i++){
        bool ok=1;
        for(int j=0;j<w.size();j++)if(tolower(s[i+j])!=w[j]){ok=0;break;}
        if(ok&&(!i||!isalpha(s[i-1]))&&(i+w.size()==s.size()||!isalpha(s[i+w.size()])))return 1;
    }
    return 0;
}
signed main(void){
    exoworldgd;
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s;
        getline(cin,s);
        chk(s,"hello")||chk(s,"hi")?cout<<"Hello! How can I help you?\n":chk(s,"bye")||chk(s,"goodbye")?cout<<"Goodbye! Have a nice day!\n":s.back()=='?'?cout<<"That's an interesting question!\n":any_of(s.begin(),s.end(),[](char c){return isdigit(c);})?cout<<"I see some numbers there!\n":s.length()>20?cout<<"That's quite a long message!\n":cout<<"I understand.\n";
    }
}