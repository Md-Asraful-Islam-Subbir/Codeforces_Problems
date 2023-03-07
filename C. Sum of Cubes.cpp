#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
	unordered_map<ll, ll> mp;
	mp[0] = 0;
	for (long long int i = 1; i <= 10001; i++)
	{
		mp[i*i*i]++;
	}
	int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		ll x;
		cin>>x;

		bool f=false;

		for (ll i = 1; i <= 10000; i++)
		{
			ll z=i*i*i;
			if (z >= x)
				break;

			if (mp.find(x - z) != mp.end())
			{
				f = true;
			}
            if(f==true)
			break;
		}


		if (f==false){
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}

	}
	return 0;
}
