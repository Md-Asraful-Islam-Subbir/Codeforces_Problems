#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll N;
  cin >> N;

  if (N >= -1 * pow(2, 31) && N < pow(2, 31)){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
