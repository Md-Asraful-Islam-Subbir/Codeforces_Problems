#include <bits/stdc++.h>
using namespace std;
int main() {
int l,r,k,test;
cin>>test;
while(test--){
cin>>l>>r>>k;
if (l == r && l > 1 || (r - l + 1 + l % 2) / 2 <= k)
        cout << "YES\n";
        else
        cout << "NO\n";
}
}
