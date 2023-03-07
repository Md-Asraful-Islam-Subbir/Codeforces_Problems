#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
int segment;
cin>>segment;
if(segment%2==0){
for(int i=0;i<segment;i+=2){
cout<<1;
}
}
else{
cout<<7;
 for(int i=0;i<segment-3;i+=2){
cout<<1;
}
}
cout<<endl;
}
}
