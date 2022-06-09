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
  map<string,bool>mp;
  while(t--){
  string s;
  cin>>s;
  if(mp[s]==1)
                cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
  mp[s]=1;
  }

}
