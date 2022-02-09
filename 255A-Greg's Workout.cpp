#include <bits/stdc++.h>
using namespace std;
int main(){
       int t;
          cin>>t;
        int a[t];
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<t;i++){
                cin>>a[i];
        }
   for(int i=0;i<t;i=i+3){
                sum1+=a[i];
        }
          for(int i=1;i<t;i=i+3){
                sum2+=a[i];
        }
          for(int i=2;i<t;i=i+3){
                sum3+=a[i];
        }

if(sum1>sum2 && sum1>sum3){
        cout<<"chest";
    }
    else if(sum2>sum1 && sum2>sum3){
        cout<<"biceps";
    }
    else{
        cout<<"back";
    }

}
