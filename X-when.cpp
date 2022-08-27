#include <bits/stdc++.h>
using namespace std;
int main()
{
    double k,h=21,m=00,d;
    cin>>k;
    if(k>=60)
    {
        d=k-60;
        h=h+1;
        m=m+d;

    }
    else
    {
        d=k;
    }
    if (d<10)
    {
        cout<<h<<":"<<"0"<<d;

    }
    else
    {
        cout<<h<<":"<<d;
    }

}
