#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int number;
        cin >> number;
        vector<int> arr(number);
        for (int ii = 0; ii< number; ++ii) {
            cin >> arr[ii];
        }
        int x = arr.front();
        for (auto &y: arr)
            x |= y;
        cout << x << '\n';
    }
}
