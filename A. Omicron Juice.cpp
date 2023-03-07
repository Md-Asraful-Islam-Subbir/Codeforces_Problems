#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
for(int i=1;i<=t;i++){
int a,b,c;
cin>>a>>b>>c;
int sum=a+b+c;
int x=sum/3;
if(x*3==sum)
cout<<"Case "<<i<<":"<<" Peaceful"<<endl;
else
cout<<"Case "<<i<<":"<<" Fight"<<endl;
}
}
