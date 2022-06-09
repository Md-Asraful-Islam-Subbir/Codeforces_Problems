#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);

      int n, k, m;
 vector <int> v;
 cin >> n;
 for (int i = 0; i < n; ++i) {
  cin >> k;
  v.push_back(k);
 }
 sort(v.begin(), v.end());
 m = count(v.begin(), v.end(), v[0]);

 for (int i = v[1]; i <= v[n-1]; i++) {

  m = max(count(v.begin(), v.end(), i), m);      //count highest occurrence

 }
 cout << m<<endl;
}
