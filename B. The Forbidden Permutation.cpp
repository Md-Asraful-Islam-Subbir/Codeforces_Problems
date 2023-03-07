#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
int t;cin >> t;
while (t--) {      int n,m,d;
      cin>>n>>m>>d;      vector<int>vec(n);
      map<int,int>mp;      for(int i=0;i<n;i++){
          cin>>vec[i];          mp[vec[i]]=i;
      }      vector<int>ans;
      for(int i=0;i<m;i++){          int x;
          cin>>x;          ans.push_back(mp[x]);
      }
      ll res=0;
      for(int i=0;i+1<ans.size();i++){          if(vec[i]>vec[i+1]||(vec[i+1]>vec[i]+d))continue;
          int op1=0,op2=0;          if(vec[i]!=1)op1=(ans[i+1]-ans[i]+1);
          if((vec[i+1]+(vec[i]+d-vec[i+1]+1))<=n)op2=(vec[i]+d-vec[i+1]+1);          res+=min(op1,op2);
      }      cout<<res<<'\n';
}
}
