#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=11;
int t,n,H,M,h[N],m[N],s[N],b[N],a;
signed main() {
 cin>>t;
 while (t--) {
  cin>>n>>H>>M;
  a=H*60+M;
  for (int i=1; i<=n; i++) {
   cin>>h[i]>>m[i];
   s[i]=h[i]*60+m[i];
  }
  for (int i=1; i<=n; i++) {
   if (s[i]>=a) {
    b[i]=s[i]-a;
   }
   else if (s[i]<a) {
       b[i]=s[i]+(1440-a);
   }
  }
  sort(b+1, b+n+1);
  cout<<b[1]/60<<" "<<b[1]%60<<endl;
 }
}
