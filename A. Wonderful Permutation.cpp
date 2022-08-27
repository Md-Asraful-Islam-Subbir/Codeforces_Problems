#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    int t;                  cin>>t;
    while(t--){
        int n,k;            cin>>n>>k;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans=0;
        for(int i=0;i<k;i++){
            if(a[i]>k){
                ans++;
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
