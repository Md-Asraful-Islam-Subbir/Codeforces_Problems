#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
        if(y1>=x2 && y2>=x1){
            cout<<max(x1,x2)<<endl;
        }
        else{
            cout<<(x1+x2)<<endl;
        }

    }
    return 0;
}
