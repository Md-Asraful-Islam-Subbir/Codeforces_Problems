#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
if(k%4==0){
cout<<"No"<<endl;
}
else{
cout<<"Yes"<<endl;
for(int i=1;i<=n;i+=2){
                                int a=i;
int b=i+1;
int x=(a+k)*b;

if(x%4==0)
{
cout<<i<<" "<<i+2-1<<endl;
}
else{
cout<<i+2-1<<" "<<i<<endl;
}
}
}
}
}
