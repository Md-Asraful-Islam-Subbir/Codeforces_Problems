#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin >> test;
    while (test--)
    {
        long long int n, B, x, y;
        cin >> n >> B >> x >> y;
        long long int sum1 = 0;
       long long int aa[n];
        aa[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if (aa[i - 1] + x <= B)
            {
                aa[i] = aa[i - 1] + x;
            }
            else
            {
                aa[i] = aa[i - 1] - y;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            sum1+= aa[i];
        }
        cout << sum1 << '\n';
    }
}
