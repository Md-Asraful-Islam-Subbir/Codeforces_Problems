#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t, n;

    cin>>t;

   while(t--)
    {
     string s;
       bool f=false;

        cin>>n;

        cin>>s;    //0101010
       ll ans=0;
        for(ll i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                if(!f && s[i]=='0'){
                    f=true;
                    ans++;
                }
                else if(f){
                    ans++;
                }
            }
        }

        cout<<ans<<endl;
    }
}
