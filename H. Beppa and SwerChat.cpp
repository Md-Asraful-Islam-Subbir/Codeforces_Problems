#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> a, b;
        for (int i = 1; i <= n; i++) {
            a.insert(i);
            b.insert(i);
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.erase(x);
        }
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            b.erase(x);
        }
        int cnt = 0;
        while (!a.empty() && !b.empty()) {
            if (*a.begin() == *b.begin()) {
                a.erase(a.begin());
                b.erase(b.begin());
            } else {
                cnt++;
                a.erase(a.begin());
                b.erase(b.begin());
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
