#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main()
{
 //   freopen("in.txt","r",stdin);
    int x1,x2,y1,y2;
    while(cin>>x1>>y1>>x2>>y2)
    {
        int t1=abs(x1-x2),t2=abs(y1-y2);
        if(t1==0)
        {
            if(t2==0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d %d %d %d\n",x1+t2,y1,x2+t2,y2);
            }
            continue;
        }
        else
        {
            if(t2==0)
            {
                printf("%d %d %d %d\n",x1,y1+t1,x2,y2+t1);
            }
            else if(t1==t2)
            {
                printf("%d %d %d %d\n",x1,y2,x2,y1);
            }
            else
                printf("-1\n");

        }
    }
    return 0;
}
