#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
typedef long long ll;
using namespace std;

void solve()
{
	ll h, w; cin >> h >> w;
	ll s = 1;
	while( s*2 <= h and s*2 <= w)	s *= 2;
	// 1.25 = 5/4 and 0.8 = 4/5
	ll m = min(h, s*5/4);
	ll n = min(w, s*5/4);
	if(m >= n)
	{
		cout << m << " " << s << endl;
	}
	else	cout << s << " " << n << endl;
}

int main()
{
	solve();
}
