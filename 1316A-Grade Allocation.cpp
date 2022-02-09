#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;                   /*2
                                                        4 10
                                                        1 2 3 4
                                                        4 5
                                                        1 2 3 4 */
		ll sum=0;
		for(ll i=1;i<=n;i++)
		{
			ll x;
			cin>>x;
			sum=sum+x;
		}
		cout<<min(sum,m)<<endl;
	}
	return 0;
}
