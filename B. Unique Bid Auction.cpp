#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+2],b[n+2];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=0;i<n+2;i++)
            b[i]=a[i];
        sort(a+1,a+n+1);
        int sup=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=a[i+1] && a[i]!=a[i-1])
            {
                sup=a[i];
                break;
            }
        }
        if(sup==0)
            cout<<"-1\n";
        else
        {
            for(int i=1;i<=n;i++)
            {
                if(b[i]==sup)
                {
                    cout<<i<<"\n";
                    break;
                }
            }
        }
    }
}

