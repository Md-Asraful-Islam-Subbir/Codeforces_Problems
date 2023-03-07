#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      map<int, int> mp;
      for(int i=0; i<n; i++){
         int a;
         cin>>a;
         mp[a] = i+1;
      }
      vector<int> ar;
      for(int i=1; i<=1000; i++){
         if(mp[i])ar.push_back(i);
      }
      int res =-1;
      for(auto i:ar){
         int a = mp[i];
         int val = -1;
         for(auto j:ar){
            int b = mp[j];
            if(__gcd(i, j)==1)val = max(val, a+b);
         }
         res = max(res, val);
      }
      cout<<res<<endl;


   }
}
