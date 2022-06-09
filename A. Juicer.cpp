#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
long long int n,b,d,a,sum=0,ans=0;
cin>>n>>b>>d;
for(long long int i=0;i<n;i++){
cin>>a;
if(a<=b){
sum+=a;
}
if(sum>d){
            sum=0;
            ans++;
        }
}

cout<<ans<<endl;
}
