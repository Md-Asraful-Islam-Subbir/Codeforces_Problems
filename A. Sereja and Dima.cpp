#include<bits/stdc++.h>
using namespace std;
 int main (){
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
 cin>>v[i];
 }
 int sr=0,dm=0, count=1;
 while(!v.empty()){
                if(count==1){
                         if(v[0]>v.back()){
                sr+=v[0];
                v.erase(v.begin());
        }
        else{
                sr+=v.back();
                v.pop_back();
        }
        count=2;
                }
                else{
                       if(v[0]>v.back()){
                dm+=v[0];
                v.erase( v.begin());
        }
        else{
                dm+=v.back();
                v.pop_back( );
        }
        count=1;
                }
 }
 cout<<sr<<" "<<dm<<endl;
 }
