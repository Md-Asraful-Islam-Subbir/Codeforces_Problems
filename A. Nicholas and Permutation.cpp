#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
         int n;
         cin >> n;
         int a[n];
         for(int i=0;i<n;i++)
         {
               cin >> a[i];
         }
         int x,y;
         int minimum;
         minimum=*min_element(a,a+n);
         int maximum;
         maximum=*max_element(a,a+n);
         for(int i=0;i<n;i++)
         {
               if(a[i]==minimum)
               x=i;
               else if(a[i]==maximum)
               y=i;
         }
         int aa=max(x,y);
         int bb=min(x,y);
         if(bb>= n-1-aa)
         cout <<aa;
         else if(bb < n-1-aa)
         cout << n-1-bb;
}
