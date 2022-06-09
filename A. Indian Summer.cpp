#include <bits/stdc++.h>
#define  endl  '\n'
using namespace std;
int main(){
 ios::sync_with_stdio(0);   cin.tie(0);
cout.tie(0);
int t;
cin>>t;

vector<pair<string,string>>v(t);
for(int i=0;i<t;i++){
     cin>>v[i].first>>v[i].second;
}
sort(v.begin(),v.end());
int size=unique(v.begin(),v.end())-v.begin();
cout<<size<<endl;
}
