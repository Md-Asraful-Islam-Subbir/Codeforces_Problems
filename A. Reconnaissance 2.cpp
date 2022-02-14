#include<bits/stdc++.h>

using namespace std;
int main(){
int n,a[101],b[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int m = 1001, d = 0;
    d = abs(a[0] - a[n-1]);
    m = min(m,d);
    int x = 1,y = n;
    for(int i=0; i<n; i++){
        d = abs(a[i] - a[i+1]);
        if(m > d){
            m = d;
            x = i+1;
            y = i+2;
        }
    }
    cout<<x<<" "<<y<<endl;

    return 0;
}
