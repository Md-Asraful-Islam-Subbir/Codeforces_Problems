#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,res=0;
cin >> n>>m;
 if(n == m){
        cout<<0<<endl;
    }
else if(m%n!=0){
cout<<"-1"<<endl;
}
else{
int d=m/n;
while(d%2==0){
                d/=2;
                res++;
            }
            while (d%3==0){
                d/=3;
                res++;
            }
if(d != 1)
                res = -1;
        cout<<res<<endl;
}

}
