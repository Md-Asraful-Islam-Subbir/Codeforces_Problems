#include<bits/stdc++.h>
using namespace std;
int main() {
int n,count100=0;
cin >> n;
vector<int> a(n);
for(int i=0; i<n; i++) {
cin >> a[i];
if(x==100)
count100++;
}
int x=0;
int sum=(a,a+n,x);
int y=sum/2;
if((y%100!=0) || (count100==0 && y%200!=0))
		cout<<"NO";
	else
		cout<<"YES";
}
