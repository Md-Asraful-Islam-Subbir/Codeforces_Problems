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
  int n,k;
  cin>>n>>k;
  vector<pair<int ,int>>v;
  for(int i=0;i<n;i++){
  int a,b;
  cin>>a>>b;
  v.pb({-a,b});
  }
  sort(all(v));
    cout << count(all(v), v[k-1]) << endl;
}
