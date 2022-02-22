#include<bits/stdc++.h>
using  namespace  std;
//typedef long long int ll;
//typedef unsigned long long int  llu;

int power(int a,int n,int m)
{
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*a)%m;
			n--;
		}
		else
		{
			a=(a*a)%m;
			n/=2;
		}
	}
	return result;
}

int main()
{
	int n;
	cin>>n;
	cout<<power(1378,n,10)<<endl;
	return 0;
}
