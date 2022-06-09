
  #include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
 int n, k,m, res = 0,l=0;
        cin >> n>>m;
        vector<string> v (n);
        for (auto& i : v)
        {
            cin >> i;
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int k=0;
                for (int f = 0; f < m; f++)
                    k += abs((v[i])[f] - (v[j])[f]);
                if (k < l || (i == 0 && j == 1))
                    l = k;
            }
        }
        cout << l;
}

      }
