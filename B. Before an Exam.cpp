#include<iostream>
using namespace std;
int n,m,i,a[50],b[50],k,x;
int main(){
cin>>n>>m;
for(i=0;i<n;i++)
{
cin>>a[i]>>b[i];
k+=a[i];
x+=b[i];
}
//cout<<"k="<<k<<endl;
//cout<<"x="<<x<<endl;
if(m<k || m>x)
{
cout<<"NO";
return 0;
}
cout<<"YES"<<endl;
for(i=0;i<n;i++){
//cout<<"b[i]="<<b[i]<<"m-k+a[i] ="<<m-k+a[i]<<endl;
int rst=min(b[i],m-k+a[i]);
cout<<rst<<" ";
m-=rst;
k-=a[i];
}
}
