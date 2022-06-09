#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int test;
cin>>test;
while(test--){
string s;
cin>>s;
int len=s.size();
if(len%2==1)
        cout<<"NO\n";
    else
    {
        string s1=s.substr(0,len/2);
        string s2=s.substr(len/2,len/2);
        // cout<<s1<<" "<<s2<<"\n";
        if(s1==s2)
        cout<<"YES\n";
         else
         cout<<"NO\n";
    }
}
}


