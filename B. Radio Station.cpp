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
  int n, m;
    cin >> n >> m;

    map<string, string> ipName;

    for ( int i = 0; i < n; i++ ) {
        string name, ip;
        cin >> name >> ip;

        ipName[ip] = name;
    }

    while ( m-- ) {
        string s1, ip;
        cin >> s1 >> ip;

        ip.pop_back();
        cout << s1 << " " << ip << "; #" << ipName[ip] << endl;
    }
}
