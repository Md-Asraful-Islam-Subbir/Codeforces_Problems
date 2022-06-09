#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int n, i;
	cin >> n;       //ROYGRBIV
	for (int i = 0; i < n / 7; i++) {
		cout << "ROYGBIV";
	}
	if (n % 7 == 1) { cout << "G"; }
	if (n % 7 == 2) { cout << "GB"; }
	if (n % 7 == 3) { cout << "YGB"; }
	if (n % 7 == 4) { cout << "YGBI"; }
	if (n % 7 == 5) { cout << "OYGBI"; }
	if (n % 7 == 6) { cout << "OYGBIV"; }

	}
