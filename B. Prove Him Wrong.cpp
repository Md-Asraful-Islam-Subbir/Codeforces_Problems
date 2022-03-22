#include <bits/stdc++.h>
using namespace std;
int main() {
long long int n,i,test,t;
cin>>test;
while(test--){
        cin>>n;
        if (n>19){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            i=0;
            while(i<n){
                t=pow(3,i);
                cout<<t<<" ";
                i++;
            }
            cout<<'\n';
            }
            }
}
