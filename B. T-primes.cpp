#include <bits/stdc++.h>
using namespace std;
bool is_prime(double sr) {
    int x = sr;
    for(int i=2; i*i<= x; i++) {
        if(x % i == 0) {
            return false ;
        }
    }
    return true;
}
int main() {
long long int test;
cin>>test;
while(test--){
long long int x, sqr_root;
        cin>>x;
        if(x == 1) {
            cout<< "NO"<<endl;
            continue;
        }
        sqr_root = sqrt(x);
        if(sqr_root * sqr_root == x) {
            if(is_prime(sqr_root))
                cout<< "YES"<<endl;
            else
                cout<< "NO"<<endl;
        }
        else {
            cout<< "NO"<<endl;
        }
}
}
