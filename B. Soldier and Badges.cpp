#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,arr[3001],sum=0;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;++i)
        if(arr[i]<=arr[i-1]){
            sum+=arr[i-1]-arr[i]+1;
            arr[i]=arr[i-1]+1;
        }
    cout<<sum;
}
