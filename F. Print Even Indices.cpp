#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, cs = 0;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> lox(n), loy(n), hix(n), hiy(n);
        for (int i = 0; i < n; i++)
            cin >> lox[i] >> loy[i] >> hix[i] >> hiy[i];
        sort(lox.rbegin(), lox.rend());
        sort(loy.rbegin(), loy.rend());
        sort(hix.begin(), hix.end());
        sort(hiy.begin(), hiy.end());

        cout << "Case #" << ++cs << ": ";

        if (lox[0] >= hix[0] || loy[0] >= hiy[0])
            cout << "0\n";
        else
            cout << (hix[0] - lox[0]) * (hiy[0] - loy[0]) << "\n";
    }

    return 0;
}
