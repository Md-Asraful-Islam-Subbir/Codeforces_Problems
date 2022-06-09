#include<bits/stdc++.h>
#define  endl  '\n'
using namespace std;

int main()
{
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
    int n, k;
    cin >> n >> k;
    int ans=k+1;
    for (int i=1; i<= n; i ++){
        int a;
        cin >> a;
        if (k%a==0) ans=min(ans, k/a);
    } cout << ans;
    return 0;
}
