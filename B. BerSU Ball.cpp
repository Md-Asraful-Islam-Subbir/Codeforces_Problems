#include <bits/stdc++.h>

using namespace std;

int main(){
int n, m, a[101],b[101],sum=0,temp1,temp2;

//taking inputs of n (boys)
cin>>n;
for (int  i = 0; i <n; i++)
{
    cin>>a[i];
}

//taking inputs of m (girls)
cin>>m;
for (int  i = 0; i <m; i++)
{
    cin>>b[i];

}

sort(a,a+n);
sort(b,b+m);


//thats our main condition of the code

   for (int  i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(a[i]==b[j]||a[i]+1==b[j]||a[i]-1==b[j]){

    sum+=1;
    b[j]=-2;
    break;

        }

    }

}




cout<<sum;
    return 0;
}
