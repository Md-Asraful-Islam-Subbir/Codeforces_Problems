#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)

using std::cin;
using std::cout;
using std::vector;

int get_sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        rep(i, n) cin >> a[i];

        while (q--) {
            int type, x, y;
            cin >> type >> x;
            if (type == 1) {
                cin >> y;
                for (int i = x-1; i < y; ++i) {
                    a[i] = get_sum_of_digits(a[i]);
                }
            }
            else {
                cout << a[x-1] << '\n';
            }
        }
    }

    return 0;
}
