#include <bits/stdc++.h>

using namespace std;
#define ll long long int
int main() {
	ll n;
   cin>>n;
   ll x=1;
   while(x*5<n){
       n-=x*5;
      x*=2;
   }
   ll d=(n-1)/x;
   if(d==0)
      cout<<"Sheldon\n";
   else if(d==1)
      cout<<"Leonard\n";
   else if(d==2)
      cout<<"Penny\n";
   else if(d==3)
      cout<<"Rajesh\n";
   else if(d==4)
      cout<<"Howard\n";
}
