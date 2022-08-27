#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		string s;
		cin>>s;
		a=0,b=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='(')a++;
			else if(s[i]==')')a--;
			else b++;
			if(a+b==1)a=1,b=0;
		}
		if(a!=b){
				cout<<"NO\n";
		}
		else cout<<"YES\n";
	}

	return 0;
}


