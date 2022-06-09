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
  int x;
  cin>>x;
  ll a[]={1200,1400,1600,1900,2100,2300,2400,2600,3000};
  cout<<*upper_bound(a,a+9,x);
 	return 0;

}
