#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
bool isvowel(char c){
return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
string s,r;
cin>>s;
for(auto u: s){
char c=tolower(u);
if(!isvowel(c)){
r+='.';
r+=c;
}
}
cout<<r<<endl;
}
