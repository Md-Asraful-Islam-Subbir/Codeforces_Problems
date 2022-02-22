#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i=1; i <= 1000; i++) {
		int x=(i*n)+1;
		for (int j=2; j<=sqrt(x); j++) {
		    if (x%j==0) {
		        cout <<i;
		        return 0;
		    }
		}
	}
	return 0;
}
