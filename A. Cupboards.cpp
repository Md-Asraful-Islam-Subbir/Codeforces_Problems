#include <iostream>
using namespace std;
int main() {
    int n,left0count=0,left1count=0,right0count=0,right1count=0;
    cin>>n;
    int a[n*2+1];
for(int i=0;i<(n*2);i++){
cin>>a[i];
}
for(int i=0;i<n*2;i+=2){
if(a[i]==0)
left0count++;
else
left1count++;
}
for(int i=1;i<n*2;i+=2){
if(a[i]==0)
right0count++;
else
right1count++;
}
int ans=0;
int x=min(left0count,left1count);
int y=min(right0count,right1count);
cout<<x+y<<endl;
	return 0;
}
