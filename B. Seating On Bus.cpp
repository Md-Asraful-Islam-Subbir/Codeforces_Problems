#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=2*n;i++)
    {
        if(2*n+i<=m)
        {
            cout<<2*n+i<<" ";
        }
        if(i<=m)
        {
              cout<<i<<" ";
        }
    }
    return 0;
}
