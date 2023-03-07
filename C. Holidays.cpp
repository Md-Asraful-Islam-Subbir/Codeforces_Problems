#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,b[105];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
	scanf("%d%d",&x,&y);
	for(int j=x;j<=y;j++)
	b[j]++;
	}
	for(int i=1;i<=n;i++){
	if(b[i]!=1){
	cout<<i<<" "<<b[i]<<endl;
	return 0;
	}
	}
	cout<<"OK"<<endl;
	return 0;
}
