#include<bits/stdc++.h>
using namespace std;
 int main (){
             long long int n,test;
             cin>>test;
             while(test--){
             int count = 0;
            int a=0;
            string str;
            cin>>str;
            for(int i=0;i<str.length();i++){
                for(int j=i+1;j<str.length();j++){
                if(str[i]==str[j])
                {
                        count = i+1;
                       break;
                    }
                    else
                    a++;
                }
                if(a+i+1==str.length())
                break;
                i++;
                a=0;
            }
             for(int i = count;i<str.length();i++){
               cout<<str[i];
            }
            cout<<endl;
                }
             }

