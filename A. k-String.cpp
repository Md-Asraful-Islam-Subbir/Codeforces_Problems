#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t=1,n,m,j,i,k,l,o,p;
    //cin>>t;
    while(t--)
    {

        string z;
        cin>>n;map<ll,ll>mp;
        cin>>z;
       // cout<<n;
        for(i=0;i<z.size();i++)
               // cout<<i;
            mp[z[i]-'a']++;
            //cout<<i;
          //  cout<<z[i]-'a';}


        p=0;     char zz[9000];    j=0;
        for(i=0;i<26;i++)
        {
            if(mp[i]%n!=0){
            p=1;
            break;
            }
            else {
                    mp[i]=mp[i]/n;
                        while(mp[i]!=0)
                        {
                            zz[j]=i+'a';j++;
                            mp[i]--;
                        }
            }
            //cout<<zz[j-1];


        }
        if(p==1)cout<<"-1"<<endl;
        else
        {
            while(n--)
            {
               for(i=0;i<j;i++)cout<<zz[i];

            }
            cout<<endl;
        }
    }
    return 0;
}
