#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;

bool isvowel(char c){
return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}


int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
vector<string>v;
int count[]={5,7,5};
for(int i=0;i<3;i++){
string s;
char c;
cin >>c;
getline(cin,s);
s+=c;
v.push_back(s);
}
for(int i=0;i<3;i++){
int c=0;
for(auto u:v[i]){
if(isvowel(u))
c++;
}
if(c!=count[i])
        return cout<<"NO"<<endl,0;
}
cout<<"YES"<<endl;
}
