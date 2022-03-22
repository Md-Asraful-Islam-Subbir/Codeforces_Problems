#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
 int main (){
       long long   int test,count1=0,count2=0,mn=INF,mx=0;
             cin>>test;
            // vector<int>v;
      long long  int a[test];
for (int i = 0; i < test; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
     cout<<mx-mn<<" ";
           count1=count(a, a+ test, mn);
           count2=count(a, a+ test, mx);
     long long int ans=0;
            if (mx != mn) {
    ans = count1 * count2;
    cout<<ans<<endl;
  } else {
ans = (count1 * (count1 - 1)) / 2;
cout<<ans<<endl;
  }
             }
