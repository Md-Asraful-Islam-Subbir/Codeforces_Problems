#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
const int MOD = 998244353;
int main()
{
  optimize();
  ll test ,a;
  cin>>test;
  while(test--){
  cin>>a;
  if(a%2==1){
  cout<<"0"<<endl;
  }
  else{
   ll ans = 1;
    for (ll i = 1; i <= a / 2; ++i) {
        ans *= 1LL * i * i % MOD;
        ans %= MOD;
    }
    cout << ans << '\n';
  }
  }
}
