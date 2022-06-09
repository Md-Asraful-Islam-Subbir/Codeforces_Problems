#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
int main()
{
  optimize();
  int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map <int, int> m;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            m[x]++;
        }
        int cnt = 0;
        for (auto i : m) {
            ++cnt;
        }

        for (int k = 1; k <= n; ++k) {
            cout << max(k, cnt)<<" ";
        }
        cout<<endl;
    }
}
