#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string word;
    cin>>word;
    if(n%2!=0){
        for(int i=n-2;i>=0;i-=2){
            cout<<word[i];
        }
        for(int i=0;i<n;i+=2){
            cout<<word[i];
        }
    }
    else {
        for(int i=n-2;i>=0;i-=2){
            cout<<word[i];
        }
        for(int i=1;i<n;i+=2){
            cout<<word[i];
        }
    }

    return 0;
}
