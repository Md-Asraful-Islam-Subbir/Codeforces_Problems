#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        int count_a=0,count_b=0,count_c=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]==-1&&arr[i+1]==-1){
                count_a++;
                i++;
                break;
            }
            if(arr[i]+arr[i+1]==0){
                count_b++;
            }
            else if(arr[i]+arr[i+1]==2){
                count_c++;
            }
        }
        if(count_a>0){
            sum+=4;
        }
        else if(count_b>0){
            sum=sum;
        }
        else if(count_c>0){
            sum-=4;
        }
        cout<<sum<<endl;

    }
}
