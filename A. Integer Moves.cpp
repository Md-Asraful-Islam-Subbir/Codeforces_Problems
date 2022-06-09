#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test;
  cin >> test;
  while (test--)
  {
    int p, q;
    cin >> p>> q;
    if (p == 0 && q == 0)
      cout << 0 << endl;
    else
    {
      int d = pow((0 - p), 2) + pow((0 - q), 2);
      int dis = sqrt(d);

      if ((dis * dis) == d)
        cout << 1 << endl;
      else
      {
        cout << 2 << endl;
      }
    }
  }

  return 0;
}
