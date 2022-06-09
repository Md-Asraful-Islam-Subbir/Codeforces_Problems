#include <bits/stdc++.h>
using namespace std;
//using namespace __gnu_pbds;
#define int int64_t
#define fl(i, a, b) for (int i = a; i < b; i++)
#define rl(i, a, b) for (int i = a; i >= b; i--)
#define all(s) s.begin(), s.end()

// os.order_of_key(k) the number of elements in the os less than k
// *os.find_by_order(k)  print the k-th smallest number in os(0-based)

int mod = 1000000007;
int mod2 = 998244353;
int ans = 1e18, n, x;
void dfs(int x, int curr)
{
    int cnt[10] = {0};
    int org = x, len = 0;
    while (org)
    {
        cnt[org % 10]++;
        org /= 10;
        len++;
    }
    if (len == n)
    {
        ans = min(ans, curr);
        return;
    }
    if (curr + n - len >= ans)
        return;
    for (int i = 9; i >= 2; i--)
        if (cnt[i])
            dfs(x * i, curr + 1);
}
main()
{
//    nfs();
    int tc = 1;
    // cin>>tc;
    while (tc--)
    {
        cin >> n >> x;
        dfs(x, 0);
        if (ans == 1e18)
            ans = -1;
        cout << ans;
    }
}
