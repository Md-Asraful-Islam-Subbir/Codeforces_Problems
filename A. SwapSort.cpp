#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    b[i]=a[i];
	}
	sort(b,b+n);
	if(is_sorted(a,a+n))cout<<0;
	else{
	    int ct=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=b[i])ct++;
	    }
	    cout<<n<<endl;
	    for(int i=0;i<n;i++){

	        for(int j=i;j<n;j++){
	            if(b[i]==a[j]){
	               cout<<i<<" "<<j<<endl;
	                swap(a[i],a[j]);
	                break;
	            }
	        }

	    }
	}
	return 0;
}
