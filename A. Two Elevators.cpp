#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=abs(b-c);
        ll y=abs(c-1);
if((x+y)>abs(a-1))
        {
            cout<<"1"<<endl;
        }
        else if((x+y)<abs(a-1))
        {
            cout<<"2"<<endl;
        }
        else
            cout<<"3"<<endl;
    }
    return 0;
}
