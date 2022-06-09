#include<bits/stdc++.h>
using namespace std;
int main(){
int test;

cin>>test;
while(test--){
int nn;
cin>>nn;
int arr[nn+4];
for(int i=0;i<nn;i++){
cin>>arr[i];
}
int mx=-1,mn=-1;
for(int i=0;i<nn-1;i++){
                if(arr[i]==arr[i+1]){
                                mn=i+1;
                                break;
                }
}
for(int i=nn-1;i>0;i--){
                if(arr[i]==arr[i-1]){
                                mx=i-1;
                                break;
                }
}
 if(mn>mx || mn==-1)cout<<0<<endl;
        else if(mn==mx)cout<<1<<endl;
        else{
            int ans = mx-mn;
            cout<<ans<<endl;
        }
}
}
