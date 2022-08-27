
#include <bits/stdc++.h>
        using namespace std;
        #define ryad ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
        int main(){
        ryad
        int x;cin>>x;
         long long c=0;
        for(int i=0;i<x;i++)
        {
        long long z;cin>>z;
        c+=z+i*(z-1);
        }
        cout<<c;
        }
