#include <bits/stdc++.h>
using namespace std;
#define Rep(i,a,b) for(int i=(a);i<(b);i++)
#define vi vector<int>
#define yy cout <<x<<' '<<y<<'\n'
#define pp  m *= 10
int main() {
    int T=1;
    cin>>T;
    while(T--) {
        int n, i=0,flag=0;
    cin>>n;
    vi a(10),b(10);
    int nDigits[10];
    while(n!=0){
        nDigits[i]=n%10;
        n/=10;
        i++;
    }
    int x=0, y=0,m=1;
    Rep(j,0,i) {
        if(nDigits[j]&1) {
                int xx=nDigits[j]/2;
            b[j]=xx+1-flag;
            a[j]=flag+xx;
            flag=1-flag;
        }
    else {
            int qq=nDigits[j]/2;
    a[j]=qq;
    b[j]=qq;
    }
    }

    Rep(j,0,i) {
        y+=b[j]*m;
        x+=a[j]*m;
        pp;
    }
    yy;
    }
    return 0;
}
