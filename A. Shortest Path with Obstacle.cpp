#include<bits/stdc++.h>

using namespace std;
int main(){
int t,xa,xb,ya,yb,xf,yf,k;
cin>>t;
while(t--){
cin>>xa>>ya;
cin>>xb>>yb;
cin>>xf>>yf;
if(xa==xb&&xb==xf)
            {
               if((ya<yf&&yf<yb) || (yb<yf&&yf<ya))
               k=(abs(yb-ya)+2);
               else
               k=abs(yb-ya);
            }
           else if(ya==yb&&yb==yf)
            {
              if((xa<xf&&xf<xb) || (xb<xf&&xf<xa))
               k=abs(xb-xa)+2;
               else
               k=abs(xb-xa);
            }
            else
            k=(abs(xb-xa)+abs(yb-ya));
            cout<<k<<endl;
}
}
