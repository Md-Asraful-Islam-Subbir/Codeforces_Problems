#include<bits/stdc++.h>
using namespace std;
long long arr[100005];
int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long ans = 0;
        for(int i = 1; i < n; i++) {
            ans = max((arr[i] * arr[i - 1]), ans);
        }
        cout << ans << '\n';
    }
    return 0;
}
