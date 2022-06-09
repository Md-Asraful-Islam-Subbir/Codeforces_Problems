#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
int main()
{
  optimize();
  int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt=0;
        map<char,int>mp;
        string ans;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                ans+=s[i];
                ans+=s[i+1];
                i++;
            }
            else
            {
                while(i<s.size() && mp[s[i]]!=1)
                {
                    mp[s[i]]=1;
                    i++;
                }

                if(i<s.size())
                {
                    ans+=s[i];
                    ans+=s[i];
                }
                mp.clear();
            }
        }
        cout<<s.size()-ans.size()<<endl;
    }
}
