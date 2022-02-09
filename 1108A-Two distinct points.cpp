#include<bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a != c)
  cout << a << " " << c << '\n';
  else {
    if (a != b)
    cout << b << " " << c << '\n';
    else
    cout << a << " " << d << '\n';
  }
}
}


