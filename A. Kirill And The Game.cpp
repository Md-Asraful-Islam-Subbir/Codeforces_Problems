#include<bits/stdc++.h>
using namespace std;
 int main (){
 long long int l, r, x, y, k;
	cin >> l >> r >> x >> y >> k;      //1 10 1 10 1
	for(long long int i = x; i <= y; i ++){
		if(l <= i * k && i * k <= r){
			cout << "YES" <<endl;
                return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
