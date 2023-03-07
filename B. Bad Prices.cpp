#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
           int right_min = INT_MAX;
             int ans = 0;
        cin >> n;
int a[n];
for(int it=0;it<n;it++){
cin>>a[it];
}
        for (int i = n -  1; i >= 0; i--) {
            if (a[i] > right_min)
                ans++;
            right_min = min(right_min, a[i]);
        }
        cout << ans << endl;
    }
}
