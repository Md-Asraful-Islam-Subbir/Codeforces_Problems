#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int x,y,z,t1,t2,t3;
cin>>x>>y>>z>>t1>>t2>>t3;
int p=abs(x-y)*t1;
//cout<<p<<endl;
int q=((abs(x-z)*t2)+ (2*t3)+t3+(abs(x-y)*t2));
//cout<<q<<endl;
if(p<q){
cout<<"NO"<<endl;
}
else if(p>q){
cout<<"YES"<<endl;
}
else {
cout<<"YES"<<endl;
}
}
