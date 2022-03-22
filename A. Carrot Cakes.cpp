//A. Carrot Cakes
#include<bits/stdc++.h>
using namespace std;
int main(){

   int n,t,k,d;
   cin>>n>>t>>k>>d;
   int x=ceil(n/float(k));
   if(x<=1){
        cout<<"NO"<<endl;
   }
else if((x*t)<=(t+d)){
        cout<<"NO";
        }
else{
                cout<<"YES";
}
    return 0;

}

//599 97 54 992
