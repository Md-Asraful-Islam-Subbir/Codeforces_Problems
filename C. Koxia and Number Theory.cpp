#include <bits/stdc++.h>
using namespace std;
long long GCD(long long x, long long y)
{
    if (y == 0) return x;
    return GCD(y, x%y);
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum=0;
        vector<long long>v;
        while(n--)
        {
            long long x;
            cin>>x;
            sum+=x;
            v.push_back(x);
        }

        int flag=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(GCD(v[i]+sum,v[j]+sum)!=1)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
