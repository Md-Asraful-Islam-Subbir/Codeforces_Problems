#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        sum += j;
    }
    int res=0;
    n++;
    for(int i=1;i<=5;i++)
    {
        sum += i;
        if(sum%n != 1)
        {
            res++;
        }
        sum -= i;
    }
    cout<<res;
    return 0;
}
