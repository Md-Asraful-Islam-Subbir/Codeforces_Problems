#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin>>t;
while (t--) {
    ll x,y;
    cin>>x>>y;

    if (x<y || x-y==1)
    cout<<"NO"<<endl;
    else if( x% 2 == 0 && y % 2 == 0)
    cout<<"YES"<<endl;
    else
    cout<<"YES"<<endl;
}
    return 0;
}
