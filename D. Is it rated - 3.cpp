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
 string s;cin>>s;
	int x;cin>>x;
	if(s=="ABC"&&x<2000)cout<<"yes";
	else if(s=="ARC"&&x<2800)cout<<"yes";
	else if(s=="AGC"&&x>=1200)cout<<"yes";
	else cout<<"no";
}
