#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
int n; cin >> n;
vector<int> a(n);
for(int i=0; i<n; i++) {
cin >> a[i];
}

int val;
cin >> val;
sort(a.rbegin(), a.rend()); //5 2 1
int ans = 0;
for(int i=0; i<n; i++) {
int currCoin = a[i];   //5  2   1
ans += val/currCoin; //  2  5   11
//cout<<ans<<endl;
val %= currCoin; // 1  1 0
if(!val)
break;
}
cout << ans << endl;
return 0;
}
