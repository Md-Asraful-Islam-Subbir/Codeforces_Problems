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
  map<int, int> cnt;
    int n;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int ans = 0;

    for ( int i = 0; i < n; i++ ) ans = max ( ans, cnt[a[i]] );
    cout << ans << endl;
}
