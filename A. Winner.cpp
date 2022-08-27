#include<bits/stdc++.h>
using namespace std;
int main()
{
   long n , mx = INT_MIN ;
   cin >> n ;
   string x[1001] ;
   long y[1001];
   map<string,long>m1,m2;
   for( int i = 0 ; i < n ; i++ )
   {
       cin >> x[i] >> y[i] ;
       m1[x[i]]+=y[i];
   }
     for(auto &it:m1)
     {
         if(it.second>mx)
            mx = it.second;
     }
     for(long i = 0 ; i < n ; i++ )
     {
         if(m1[x[i]]==mx)
         {
             m2[x[i]]+=y[i];
             if(m2[x[i]]>=mx)
             {
                 cout << x[i];
                 break ;
             }
         }
     }
}
