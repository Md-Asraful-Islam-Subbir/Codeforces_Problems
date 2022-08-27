#include <bits/stdc++.h>
#define  m2x  1000000007
#define ll long long int
using namespace std;

int main() {
 ll t;
 cin>>t;
 while(t--){
  ll num;
    cin>>num;
    vector<ll>vec(num);
    map<ll,ll>mmappp;
    ll answer=1;
    ll m22n,m22x;
    for(ll i=0;i<num;i++){
        cin>>vec[i];
    }
    for(ll i=0;i<num;i++){
        mmappp[vec[i]]=i;
    }
    m22n=mmappp[0];
    m22x=mmappp[0];

    for(ll i=1;i<num;i++){
        if(mmappp[i]>m22x){
            m22x=mmappp[i];
        }
        else if(mmappp[i]<m22n){
            m22n=mmappp[i];
        }
        else{
            answer=answer*(m22x-m22n+1-i);
            answer%=m2x;
        }
    }
    answer+=m2x;
    answer-=m2x;
    answer%=m2x;
    cout<<answer<<endl;
 }
 return 0;
}
