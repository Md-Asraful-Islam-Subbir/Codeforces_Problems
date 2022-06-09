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
  set<int> s;
    int n;
    cin >> n;

    int p;
    cin >> p;
    for ( int i = 0; i < p; i++ ) {
        int a;
        cin >> a;
        s.insert ( a );
    }


    cin >> p;
    for ( int i = 0; i < p; i++ ) {
        int a;
        cin >> a;
        s.insert ( a );
    }

    if ( s.size () == n ) cout << "I become the guy.\n";
    else cout << "Oh, my keyboard!\n";
}
