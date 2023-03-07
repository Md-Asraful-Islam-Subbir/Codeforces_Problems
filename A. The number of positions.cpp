#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

      ll n,a,b;
      cin>>n>>a>>b;
      printf("%d\n", n - max(a + 1, n - b) + 1);
    return 0;
}
