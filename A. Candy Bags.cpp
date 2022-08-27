#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int start=1;
    int end=n*n;
    for(int j=0;j<n;j++){
        for(int i=0;i<n/2;i++){
            cout<<start<<" ";
            start++;
        }
        for(int i=0;i<n/2;i++){
            cout<<end<<" ";
            end--;
        }
        cout<<"\n";
    }

    return 0;
}
