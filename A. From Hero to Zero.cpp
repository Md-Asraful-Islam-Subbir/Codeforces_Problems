#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    ll n,k;
    while(t--)
    {
        cin>>n>>k;      //27 3
        ll count=0;
        while(n>0)
        {
            count+=n%k;
            n=n/k;
            count++;
        }
        cout<<count-1<<endl;
    }
    return 0;
}
