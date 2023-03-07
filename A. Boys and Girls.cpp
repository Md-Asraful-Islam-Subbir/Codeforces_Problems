#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,i;
    cin>>n>>m;
    if(n>m)
    {
        for(i=0; i<m; i++)
        {
            cout<<"BG";
        }
        for(i=0; i<n-m; i++)
        {
            cout<<"B";
        }
        cout<<endl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cout<<"GB";
        }
        for(i=0; i<m-n; i++)
        {
            cout<<"G";
        }
        cout<<endl;
    }
    return 0;

}
