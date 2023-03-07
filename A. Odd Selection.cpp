 #include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
  vector<int> vp;
  vector<int> vi;
        int n,k;
        cin>>n>>k;
        int a[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
            if(a[i]%2==0)  vp.push_back(i);
          else vi.push_back(i);
        }
        if (vi.size()==0 ) {cout<<"NO"<<endl;}
      else if (vp.size()==0  && k%2==0 ) {cout<<"No"<<endl;}
      else if(k==n && vi.size()%2==0) {cout<<"No"<<endl;}
      else {cout<<"Yes"<<endl;}
      }
}
