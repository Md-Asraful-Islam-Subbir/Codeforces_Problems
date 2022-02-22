#include <bits/stdc++.h>
using namespace std;
void solve(){
 int number;
    cin >> number;
    int arr[number];
    for(int ii=0;ii<number;ii++){
        cin>>arr[ii];
    }
    int result = 0;
    if (number <= 2)
    {
        cout << 0 << endl;
        for (int ii : arr)
        {
            cout << ii << " ";
        }
        cout << endl;
         return;
    }
    for (int ii = 1; ii < number- 1; ii++)
    {

        if (arr[ii] > arr[ii - 1] && arr[ii + 1] < arr[ii])
        {

            int result1 = arr[ii];
            int result2 = (ii + 2 < number) ? arr[ii + 2] : INT_MIN;
            int ins = max(result1, result2);
            arr[ii+ 1] = ins;
            result++;
        }
    }
    cout << result << endl;
    for (int ii : arr)
    {
        cout << ii << " ";
    }
    cout << endl;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
      solve();
    }
    return 0;
}
