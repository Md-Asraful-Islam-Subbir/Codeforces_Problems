#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int Q=1073741824;
int main() {

int a,b,c;
  cin>>a>>b>>c;
  int f=a*b*c;
  ll sum=0;
  vector<int>d(f+1);
  for(int i=1;i<=f;i++){
   for(int j=i;j<=f;j+=i){
      d[j]++;
   }
  }
  for(int i=1;i<=a;i++){
   for(int j=1;j<=b;j++){
      for(int k=1;k<=c;k++){
        sum+=d[i*j*k]%Q;
      }
    }
  }
  cout<<sum;
}
