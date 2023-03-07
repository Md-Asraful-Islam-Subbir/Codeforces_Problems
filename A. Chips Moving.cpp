#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int count_0=0;
int count_1=0;
for(int it=0;it<n;it++){
cin>>a[it];
if(a[it]%2==0)
count_0++;
else
count_1++;
}
int ans=min(count_0,count_1);
cout<<ans<<endl;
}
