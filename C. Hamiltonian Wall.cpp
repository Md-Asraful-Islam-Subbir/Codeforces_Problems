#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        string s[2];            cin>>s[0]>>s[1];

        vector<int> bs;
        bool finished=false,impossible=false;
        for(int i=0;i<n;i++){
            if(s[0][i]=='B' and s[1][i]=='B'){
                bs.push_back(2);
                if(finished){
                    impossible=true;
                    break;
                }
            }
            else if(s[0][i]=='B'){
                bs.push_back(0);
                if(finished){
                    impossible=true;
                    break;
                }
            }
            else if(s[1][i]=='B'){
                bs.push_back(1);
                if(finished){
                    impossible=true;
                    break;
                }
            }
            else{
                if(bs.empty())continue;
                finished=true;
            }
        }

        if(bs.empty()){
            cout<<"YES"<<endl;
            continue;
        }
        if(impossible){
            cout<<"NO"<<endl;
            continue;
        }

        bool ok=true;
        int last=-1;
        int cons=0;
        for(int i=0;i<bs.size();i++){
            if(bs[i]==0){
                last=0;
                cons=0;
                if(i+1<bs.size() and bs[i+1]==1){
                    ok=false;
                    break;
                }
            }
            else if(bs[i]==1){
                last=1;
                cons=0;
                if(i+1<bs.size() and bs[i+1]==0){
                    ok=false;
                    break;
                }
            }
            else{
                cons++;
                if(i+1<bs.size() and bs[i+1]!=2){
                    if(last==-1){
                        cons=0;
                        continue;
                    }
                    else{
                        if(last==1){
                            if(cons%2==1 and bs[i+1]==1){
                                ok=false;
                                break;
                            }
                            else if(cons%2==0 and bs[i+1]==0){
                                ok=false;
                                break;
                            }
                        }
                        else{
                            if(cons%2==1 and bs[i+1]==0){
                                ok=false;
                                break;
                            }
                            else if(cons%2==0 and bs[i+1]==1){
                                ok=false;
                                break;
                            }
                        }
                        cons=0;
                    }
                }
            }
        }

        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
