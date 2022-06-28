#include<bits/stdc++.h>
using namespace std;
int a[10000],n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long ans=1000000000,ansi=1;
	for(int i=a[n];i>=0;i--){
		long long sum=0;
		for(int j=1;j<=n;j++){
			sum+=min(min(abs(i-1-a[j]),abs(i+1-a[j])),abs(i-a[j]));
		}
		if(sum<ans){
			ans=sum;
			ansi=i;
		}
	}
	cout<<ansi<<" "<<ans<<endl;
}
