#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
    ll n ; cin >> n ; string s ; cin >> s ;
    int l=s.size();
        string strr  ;
        stack<char> mystack ;
        //cout<<"A"<<'a'-1;
        for(int i=0;i<l;i++){
            mystack.push(s[i]);
        }
        while(! mystack.empty()){
            int sss= mystack.top()-'0';
             mystack.pop();
            if(sss==0){
                                 int aa= mystack.top()-'0';
                 mystack.pop();
                int a= mystack.top()-'0';
                 mystack.pop();
                int  mystack=a*10+aa;
                strr+=( mystack+96);
            }
            else{
               strr+=(sss +96);
            }
        }
        reverse(strr.begin(),strr.end());
        cout << strr << endl;
    }
    return 0;
}
