#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,p;
   cin >> n >> p;
   int cnt = 0;
   string a;
   cin >> a;
   int x=n-p;
   for(int i = 0;i<x;i++){
       if(a[i] == a[i+p] && a[i] != '.')
       cnt++;
       else if(a[i] == '.' && a[i+p] == '.'){
           a[i] = '0';
           a[i+p] = '1';
       }
       else if(a[i] == '.'){
           a[i] = (a[i+p] - '0') ^ 1 + '0';
       }
       else if(a[i+p] == '.'){
           a[i+p] = (a[i] - '0') ^ 1 + '0';
       }


   }
   if(cnt == x)
   cout<<"No"<<endl;
   else{
       for(int i = 0;i<a.length();i++)
       if(a[i] != '.')
       cout<<a[i];
       else
       cout<<"1";
   }

    return 0;
}
