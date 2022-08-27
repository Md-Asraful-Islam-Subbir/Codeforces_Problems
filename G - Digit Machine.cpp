#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    vector<int> l(10);
    for(int i=0;i<10;i++)cin>>l[i];
    cout<<l[l[l[0]]]<<endl;
}
