#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    int arr[30];
    int mx = 0;
    for(int i = 0;i<26;i++){
        cin>>arr[i];
        mx = max(mx, arr[i]);
    }
    int ans = 0;
    for(int i = 0;i<s.length();i++){
        ans += (i+1)*arr[s[i]-'a'];
    }
  //  cout<<"ans="<<ans<<endl;
    int val = s.length()+1;
    while(k--){
        ans += val*mx;
        //cout<<"new_ans="<<ans<<endl;
        val++;
    }
    cout<<ans<<"\n";
    return 0;
}
