#include <iostream>
using namespace std;
const string str = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
int main() {
	string s;
	int n;
	cin >> s >> n;
	string ans = str;
	while (n--) {
		string a;
		cin >> a;
		if (a.substr(0, s.size()) == s)
			if (a < ans) ans = a;
	}
	if (ans == str) cout << s;
	else cout << ans;
	return 0;
}
