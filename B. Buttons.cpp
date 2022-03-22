#include<bits/stdc++.h>
using namespace std;
 int main (){
  long long int n,ans,i;
 cin>>n;
 ans = n;
    for( i=1;i<n;i++)
        ans+=(n-i)*i;
    cout<<ans;
 }
