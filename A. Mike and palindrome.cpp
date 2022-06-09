#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
string s,r;
int cc=0;
cin>>s;
if(s.size()==1){
        cout<<"YES";
        return 0;
    }
    for(int i=0; i<=s.size()/2-1; i++){
        if(s[i]!=s[s.size()-1-i]){
            cc++;
        }
    }
    if(cc>1){
        cout<<"NO";
        return 0;
    }
    if(s.size()%2==0&&cc==0){
        cout<<"NO";
        return 0;
    }
    cout<<"YES";
}
