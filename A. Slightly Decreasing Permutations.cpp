#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

        ll n, k, j = 1;
        cin >> n >> k;

   for (int i = n; i > n - k; i--)
   cout << i << " ";
    for (int i = 1; i <= n - k; i++)
    cout << i << " ";

    return 0;
}
