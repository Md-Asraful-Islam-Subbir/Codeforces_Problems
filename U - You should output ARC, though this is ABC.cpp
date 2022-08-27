#include <bits/stdc++.h>
using namespace std;
int main(){
int r, c;
    cin>>r>>c;


    int arr[4];
    for(int i = 0; i < 4; i++)
        cin>>arr[i];

    cout<<arr[2*(r-1)+(c-1)];
}
