#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=a;
 //   cout<< a+(a-1)/(b-1);
 while(a>=b){
x=x+(a/b);
a=a/b+(a%b);
 }
 cout<<x<<endl;
}
