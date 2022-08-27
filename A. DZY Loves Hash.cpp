#include<bits/stdc++.h>
using namespace std;
int main(){
                bool found=false;
set<int>s;
int p,n;
cin>>p>>n;
int arr[n],k=-1;
for(int i=0;i<n;i++){
cin>>arr[i];
//s.insert(arr[i]);
if(s.find(arr[i]%p)!=s.end() && found==false){
            found=true;
            k=i+1;
        }
        s.insert(arr[i]%p);
}
/*int l=s.size();
if(l==n){
                cout<<-1<<endl;
}
else
cout<<l<<endl;*/
cout<<k;
}
