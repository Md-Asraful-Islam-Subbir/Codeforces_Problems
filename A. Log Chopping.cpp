#include<bits/stdc++.h>
using namespace std;
int main(){
int test,n;
cin>>test;
while(test--){
cin>>n;
int arr[n];
 int sum = 0;
        for (int i = 1;i<=n;i++) {
            cin >> arr[i];
            sum += arr[i] ;
        }
        sum=sum-n;
        if (sum % 2 == 1) {
            cout << "errorgorn"<<endl;
        }
        else {
            cout << "maomao90"<<endl;
        }
}
}
