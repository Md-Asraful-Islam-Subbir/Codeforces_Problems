#include <bits/stdc++.h>

using namespace std;

int T, n;

int main() {
    ios::sync_with_stdio(false);
    cin >> T;
    while (T--) {
        cin >> n;
        set<int> st;
        for (int i = 1; i <= n; ++i) st.insert(i);
        while (st.size() > 2) {
            int a = *st.begin(); st.erase(a);
            int b = *st.begin(); st.erase(b);
            int c = *st.begin(); st.erase(c);
            st.insert(a), st.insert(b), st.insert(c);
            cout << "? " << a << " " << c << endl;
            int d1, d2;
            cin >> d1;
            cout << "? " << b << " " << c << endl;
            cin >> d2;
            if (d1 == d2) {
                st.erase(c);
            } else if (d1 > d2) {
                st.erase(b);
            } else {
                st.erase(a);
            }
        }
        int a = *st.begin(); st.erase(a);
        int b = *st.begin(); st.erase(b);
        cout << "! " << a << " " << b << endl;
        int res;
        cin >> res;
        assert(res == 1);
    }
    return 0;
}
