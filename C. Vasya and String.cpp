#include <bits/stdc++.h>

#define ll long long int

using namespace std;

string s;
int n,k;
int solve(char first) {
       int j = 0;
       int ans = INT_MIN;
        int l = s.length();
         int cnt = 0;
       for(int i = 0; i < l; i++) {
       	    if(s[i] != first) {
       	    	 cnt++;
       	    }
       	    while(cnt > k) {
       	    	 if(s[j] != first) {
       	    	 	 cnt--;
       	    	 }
       	    	 j++;
       	    }
       	    if(i - j + 1 > ans) {
       	    	 ans = 	i - j + 1;
       	    }
       }
       return ans;
}


int main() {
	 cin >> n >> k;
	 cin >> s;
	 int p = solve('a');
	 int q = solve('b');
	 cout << max(p,q);

	return 0;

}
