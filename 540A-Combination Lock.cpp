#include <bits/stdc++.h>
using namespace std;
int main(){
int t,sum=0;
cin>>t;
string arr1;
string arr2;
cin>>arr1;
cin>>arr2;
for(int i=0;i<t;i++){

int p=abs(arr1[i]-arr2[i]);
int q=10-abs(arr1[i]-arr2[i]);
int x=min(p,q);
sum+=x;
}
cout<<sum<<endl;
}
