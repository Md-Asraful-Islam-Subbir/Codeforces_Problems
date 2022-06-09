#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long int
#define pb push_back
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
int main()
{
  optimize();
  int t;
  cin>>t;
  vector<string>v;
  while(t--){
  char c,s;
  string str;
  cin>>c;
  getline(cin,str);
  str=c+str;
  v.push_back(str);
 // cout<<str<<endl;
  cin>>s;
int flag;
for(int i=0;i<str.size();i++){

			if(str[i]== s && i % 2 == 0){
				 flag = 1;
				break;
			}
			else{
				 flag = 0;
			}
		}

if(flag == 1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
  }
}
