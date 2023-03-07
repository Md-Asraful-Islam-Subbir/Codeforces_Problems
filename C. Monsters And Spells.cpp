#include<bits/stdc++.h>
#define ll long long
using namespace std;
int k[200],h[200];
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>k[i];
		for(int i=1;i<=n;i++)cin>>h[i];
		int pos=k[n]-h[n]+1;
		int r=k[n];
		ll ans=0;
		for(int i=n-1;i>=0;i--){
			if(k[i]<pos){
				ans+=1ll*(r-pos+1)*(r-pos+2)/2;
				r=k[i];
				pos=k[i]-h[i]+1;
			}
			else{
				pos=min(pos,k[i]-h[i]+1);
			}
		}
		cout<<ans<<endl;
	}
}
