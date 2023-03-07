#include<bits/stdc++.h>
using namespace std;
bool check(string str){
    int x=str.size()/2;
    bool res=true;
   for(int i=0;i<x/2;i++){
    if(str[i]==str[x-i-1]||(str[i]=='?' && str[x-i-1]!='?')||(str[i]=='?' && str[x-i-1]=='?')){
        res=true;
        }
    else{
        res=false; break;
    }
   }
return res;
}
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    if(s!="?"){
            if(check(s)){
         for(int i=0;i<n/2;i++)
    {
        if(s[i]!='?'&&s[n-i-1]=='?')
        {
            s[n-i-1]=s[i];
        }
       else if(s[i]=='?'&&s[n-i-1]!='?')
        {
            s[i]=s[n-i-1];
        }
       else if(s[i]=='?'&& s[n-i-1]=='?')
        {

           s[i]='a';
            s[n-i-1]='a';
        }
    }
    cout<<s<<endl;
            }
        else{
        cout<<-1<<endl;
        }
    }
else{
    cout<<"a"<<endl;
}

}
