#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin >> str;
        stack<char> st;
        int count1 = 0;
        for (int i = 0; i <n; i++)
        {
            if (str[i] == '(')
            {
                st.push('(');
            }
            if (str[i] == ')' && st.empty())
            {
                count1++;
            }
            if (str[i] == ')' && !st.empty())
            {
                st.pop();
            }
        }
        cout << (count1+ st.size())/2 << endl;
    }
    return 0;
}
