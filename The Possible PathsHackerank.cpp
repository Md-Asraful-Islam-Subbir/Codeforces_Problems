#include <iostream>
using namespace std;
long long int numberOfPaths(int m, int n)
{
    if (m == 1 || n == 1)
        return 1;
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
    // + numberOfPaths(m-1, n-1);
}

int main()
{
               long long int x,y;
                cin>>x>>y;
    cout << numberOfPaths(x,y)<<endl;
    cout<<"There are two paths"<< numberOfPaths(x,y);
    return 0;
}
