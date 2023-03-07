#include<bits/stdc++.h>
using namespace std;
int n,a[100001],lin,sum;
int main(){
	cin>>n;
	int m=n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==0) lin++;
		sum+=a[i];
	}
	if(lin==0){
		cout<<"-1";
		return 0;
	}
	sort(a+1,a+n+1);
	if(sum%3!=0){
		int t=INT_MAX,s=0;
		for(int i=1;i<=n;i++){
			if(a[i]<t&&a[i]%3==sum%3){
				t=a[i];
				a[i]=-1;
				m--;
				break;
			}
		}
		if(t==INT_MAX){
			for(int i=1;i<=n;i++){
				if(s==2) break;
				if(a[i]%3!=sum%3&&a[i]%3!=0){
					a[i]=-1;
					m--;
					s++;
				}
			}
		}
	}
	if(m==lin) cout<<"0";
	else for(int i=n;i>=1;i--) if(a[i]!=-1) cout<<a[i];
	return 0;
}

