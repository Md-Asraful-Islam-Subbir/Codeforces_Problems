#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long cnt=0,cnt2=0;
    cin >> n;
    int arr[n+2];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==1)
        {
            cnt++;
        }
        else cnt2+=cnt;
    }
    cout <<cnt2 << endl;
}
