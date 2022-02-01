#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
          int n;
        cin>>n;

        if(n%7==0) printf("%d\n", n);

        else
        {
            int x = n%7;
            int y = 7-x;
            if(n%10>=7) printf("%d\n", n-x);
            else if(n%10<=3) printf("%d\n", n+y);
            else
            {
                int z = n%10;
                if(z>=x) printf("%d\n", n-x);
                else printf("%d\n", n+y);
            }
        }
    }

    return 0;
}
