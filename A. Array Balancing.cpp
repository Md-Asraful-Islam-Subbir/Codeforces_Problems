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
  int tt,nn;
  cin>>tt;
  while(tt--){
  cin>>nn;
  int arr[2][25];
    for(int ii=0;ii<2;ii++)
      for(int jj=0;jj<nn;++jj)
       cin>>arr[ii][jj];
    ll sum=0;
    for(int ii=1;ii<nn;++ii){
      ll xx=abs(arr[0][ii]-arr[0][ii-1]) + abs(arr[1][ii]-arr[1][ii-1]);
      ll yy=abs(arr[1][ii]-arr[0][ii-1]) + abs(arr[0][ii]-arr[1][ii-1]);
      if(xx>yy)
        swap(arr[0][ii],arr[1][ii]);
      sum+=min(xx,yy);
    }
  cout<<sum<<endl;
  }
}
