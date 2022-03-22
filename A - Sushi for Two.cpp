#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=1,count2=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     /* 7
2 2 2 1 1 2 2

6
1 2 1 2 1 2

9
2 2 1 1 1 2 2 2 2 */
    for(int i=0;i<n-1;i++){
       if(arr[i]==1){
           if(arr[i]==arr[i+1]){
               count1++;
           }
          }
          else{
              if(arr[i]==arr[i+1]){
               count2++;
           }
          }
       }
       int ans=min(count1,count2);
       cout<<ans*2;

    return 0;
}
