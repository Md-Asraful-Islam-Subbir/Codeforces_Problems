#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
int main()
{
  optimize();
  int t;
  cin>>t;
  while(t--){
  ll l,r,a;
  cin>>l>>r>>a;
 if(a-(r%a)>1)
        {
            if(r-(r%a)-1>=l)
                r=r-(r%a)-1;
        }
        cout<<r/a+r%a<<endl;
  }
}

