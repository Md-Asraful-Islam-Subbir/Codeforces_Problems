#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#define sp " "
int main()
{
  optimize();
  int trail;
  cin>>trail;
  while(trail--){
               ll input;
               cin>>input;
               vector<ll>vec(input) ;
                         map<ll,ll>cnt;
                         for(int ii=0;ii<input;ii++){
                                cin>>vec[ii];
                                cnt[vec[ii]]++;
                         }
                        ll E=0,F=0;
                         for(auto u:cnt){
                                if(u.second<=F) continue;
                                else
                                E=u.first; F=u.second;
                         }
                         ll n=input-F;
                         ll s=0;
                         while(n>0){
                                s++;
                                if(F<n){
                                                n-=F;
                                                s+=F;
                                                F*=2;
                                }
                                else {
                                                s+=n;
                                                break;
                                }
                         }
                         cout<<s<<endl;
        }
}
