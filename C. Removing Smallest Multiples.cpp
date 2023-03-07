#include<bits/stdc++.h>
#include<iomanip>
#define ll long long int
#define tc ll t ; cin>>t; while(t--)
#define abdo     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int N = 1e4;
ll frq[N];
ll sol(){
  int n;
      cin>>n;
        string a; cin >> a;
        vector<ll> mark(n+1,0);
        ll ans = 0;

        for(int i=0; i<n; i++) {
            if(a[i] == '1') mark[i+1] = 100;
        }
        for(int i=1; i<=n; i++) {
            if(mark[i] != 100) {
                for(int j=i; j<=n; j+=i) {
                    if(mark[j] == 100) break;
                    if(!mark[j]) {
                        ans += i;
                        mark[j] = 1;
                    }
                }
                mark[i] = 1;
            }
        }
        return ans;
}
int main(){
    ll t=1;
    cin>>t;
    while(t--){
       cout << sol()<<endl;
    }
}
