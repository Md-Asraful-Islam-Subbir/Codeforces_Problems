
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a=s.size();
    int n;
    if(a>1){
        n=s[a-2]*10-'0'+s[a-1]-'0';
    }
    else{
        n=s[0]-'0';
    }
if(n%4==0){
        cout<<4<<endl;
    }
    else if(n%4==2){
        cout<<0<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
