#include<bits/stdc++.h>
#define  endl '\n'
using namespace std;
 int main (){
         ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
             long long int n,test;
             cin>>test;
             while(test--){
                   cin>>n;
    long long int a[n];
for(long long int i=0;i<n;i++){
        cin>>a[i];
}
long long int y=max_element(a, a + n) - a;
long long int x=min_element(a, a + n) - a;
cout<<x+1<<" "<<y+1<<endl;
}
}
