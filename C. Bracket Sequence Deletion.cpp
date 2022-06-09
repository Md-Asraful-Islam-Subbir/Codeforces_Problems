#include<bits/stdc++.h>

using namespace std;

void solve1() {
    int n; cin >> n;
  string inn; cin >> inn;
  n = inn.size();
  int i = 0;
  int c = 0;
  while (i < inn.size() - 1) {
    if (inn[i] == inn[i + 1]) {
      c++;
      i += 2;
      continue;
    }
    if (inn[i] == '(' && inn[i + 1] == ')') {
      c++;
      i += 2;
      continue;
    }
    int index = -1;
    for (int k = i + 1; k < n; k++) {
      if (inn[k] == ')') {
        c++;
        index = k;
        break;
      }
    }
    if (index == -1) break;
    i = index + 1;
  }
  int l = 0;
  if (i < n) {
    l = n - i;
  }

  cout << c << " " << l << endl;
}

int main(){
    int test; cin >> test;
    while(test--){
        solve1();
    }
    return 0;
}
