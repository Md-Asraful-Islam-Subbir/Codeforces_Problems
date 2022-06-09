#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;

int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]=='0')
            {
                if(s[i+1]=='0')
                cnt+=2;
                else if(s[i+2]=='0')
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
    }
