#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
string str;
cin>>test;
while(test--){
cin>>str;
int l=str.size();
//if(l==1){
//cout<<"NO"<<endl;
//}
        int result=1;
        int B=0,A=0;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i]=='A')
            {
                A++;
            }
            else
            {
                B++;
            }
            if (B>A)
            {
                result=0;
            }
        }
        if (str[l-1]!='B')
        {
              result=0;
        }
        if (result)
        {
            cout<<"YES"<<endl;
        } else
        {
            cout<<"NO"<<endl;
        }
    }
}
