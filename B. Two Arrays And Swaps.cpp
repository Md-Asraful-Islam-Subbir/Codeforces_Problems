#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		ll res = 0;
		cin >> n >> k;
ll a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			res += a[i];
		}
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		sort(a, a + n);
		sort(b, b + n);
		for (int i = 0; k&&i < n; i++)
		{
		                //cout<<"b[n - i - 1]="<<b[n - i - 1];
			if (b[n - i - 1] < a[i])break;
			else
			{
				res += b[n - i - 1] - a[i];
				k--;
			}
		}
		cout << res << endl;
	}
	return 0;
}
