#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int k,x=0,mini,maxi;
cin>>k;
mini= min(k,100);
maxi=100-mini;
 if(mini==0){
        cout<<1<<endl;
    }
    else{
         for(int i=1; i<=mini; i++){
        if(mini%i==0 && maxi%i==0){
            if(i>=x){
                        x = i;
            }
        }
    }
    cout<<100/x<<endl;
    }

}
}
