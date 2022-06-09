#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
 if(n==1 && a[0]>1)
           cout<<"NO"<<endl;
           else if(n==1 && a[0]==1)
           cout<<"YES"<<endl;
           else if(a[n-1]==a[n-2] || a[n-1]-a[n-2]==1)
          cout<<"YES"<<endl;
           else
         cout<<"NO"<<endl;
}
}
