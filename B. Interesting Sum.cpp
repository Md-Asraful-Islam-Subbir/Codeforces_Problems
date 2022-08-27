#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int test;
    cin>>test;
    while(test--) {
      long long int num;
       cin>>num;
      long long int arr[num];
       for(long long int i=0; i<num; i++) cin>>arr[i];
       sort(arr, arr+num);
long long int x=arr[0] +arr[1];
long long int y=arr[num-1] + arr[num-2];
       long long int slve =y -x ;
       cout<<slve<<endl;
    }
 return 0;
}
