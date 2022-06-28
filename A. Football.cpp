#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t,cnt=0;
    cin>>t;
    string s;
    vector<string>v;
    while (t--)
    {
        cin>>s;
        v.push_back(s);

    }
    sort(v.begin(),v.end());
    int n=v.size();

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i]!=v[i-1])
        {
            cnt=i;

        }


    }
   // cout<<n<<endl;
     if (cnt==0)
     {
         cout<<v[0]<<endl;
     }
     else if((n/2)<cnt)
     {
         cout<<v[0]<<endl;
     }
     else
     {
        cout<<v[n-1]<<endl;
     }



}
