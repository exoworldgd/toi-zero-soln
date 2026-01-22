#include<bits/stdc++.h>
#define exoworldgd cin.tie(0)->sync_with_stdio(0),cout.tie(0)
using namespace std;
int h1,h2,b1,b2,x,y,mx;
signed main(void){
	exoworldgd;
	cin>>h1>>h2>>b1>>b2>>x>>y;
	for(int i=0;i<=x;i++)for(int j=0;j<=x-i;j++)for(int a=0;a<=y;a++)for(int b=0;b<=y-a;b++)if(i+b<=h1&&j+a<=h2&&i+a<=b1&&j+b<=b2)mx =max(mx,i+j+a+b);
	cout<<mx;
}