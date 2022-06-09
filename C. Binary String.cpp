#include<bits/stdc++.h>
#define ll                long long int
#define sz(a)            (int)a.size()
using namespace std;

ll number;

void solve() {
 string str1;
 cin >> str1;
 number = sz(str1);
 ll ii = 0;
 ll ans=0;
 while(ii< number && str1[ii] == '0') ii++;
 str1 = str1.substr(ii);
 ii = sz(str1) - 1;
 while(ii >= 0 && str1[ii] == '0') ii--;
 str1 = str1.substr(0, ii + 1);

 number = sz(str1);
 ll count1(0), count2(0);
 ii = 0;
 while(ii < number) {
  if(str1[ii] == '0') count1++;
  ii++;
 }
 if(count1 <= 1) {
  cout << count1 << endl;
  return;
 }
 ii = 0;
 while(ii < number && count2 < count1) {
  if(str1[ii] == '0') count1--;
  else count2++;
  ii++;
 }

 int j = number - 1;
 while(j>= ii && count2< count1) {
  if(str1[ii] == '0') count1--;
  else count2++;
  ii--;
 }

 cout << max(count1, count2) << endl;

}

int main() {
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 int t ;
 cin >> t;
 while(t--) {
  solve();
 }
 return 0;
}
