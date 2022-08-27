#include<bits/stdc++.h>
using namespace std;
#define ll            long long
int main(){
		int a,b;
		cin>>a>>b;
		int x=0,y=0,z=0;
		for (int i = 1; i <=6; i++)
		{
		int p=abs(a-i);
		int q=abs(b-i);
			if (p<q)
			{
				x++;
			}
			else if (p>q)
			{
				z++;
			}
			else{
				y++;
			}
		}
		cout<<x<<" "<<y<<" "<<z;
	return 0;
}
