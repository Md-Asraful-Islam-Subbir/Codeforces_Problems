#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int A[n];
   int length=1,maxLenght=1;
   for(int i=0;i<n;i++)
   {
       cin>>A[i];
   }
 //5
//1 7 2 11 15
   if(n==0)
     return 0;
   for(int i=1;i<n;i++){
       if(A[i]>A[i-1])
       {
           length++;
       }
       else
       {
           length=1;
       }
       maxLenght=max(maxLenght,length);
   }
   cout<<maxLenght<<endl;
}
