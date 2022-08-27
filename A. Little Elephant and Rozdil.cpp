#include <bits/stdc++.h>
	using namespace std;

	int main()
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		int x=*min_element(a,a+n);
		int index,count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==x)
				{
					index=i;
					count++;
				}
		}
		if(count==1)
			cout<<index+1;
		else
			cout<<"Still Rozdil";

	}
