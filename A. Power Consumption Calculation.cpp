#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int p1,p2,p3,t1,t2;
	cin>>n;
	cin>>p1>>p2>>p3>>t1>>t2;
	int sum=0;
	int l[n];
	int r[n];
	for(int i=0;i<n;++i){
		cin>>l[i]>>r[i];
		sum+=(r[i]-l[i])*p1;
		if(i>0){
			int x=l[i]-r[i-1];
			if(x<=t1){
				sum+=x*p1;
			}else if(x<=t1+t2){
				sum+=t1*p1+(x-t1)*p2;
			}else{
				sum+=t1*p1+t2*p2+(x-t1-t2)*p3;
			}
		}
	}
	cout<<sum;

	return 0;
}
