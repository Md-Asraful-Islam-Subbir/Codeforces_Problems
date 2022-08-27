#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
int main(){
    ll n, m; cin >> n >> m;
    vi v(m);
    for(auto &i: v) cin >> i;
    ll s = accumulate(v.begin(), v.end(), 0);
    if(n%2 == 0)
    s = v[m-1];
    cout << (s%2!=0 ? "odd" : "even" ) << endl;
}
