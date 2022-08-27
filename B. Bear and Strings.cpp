#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    int res = 0;
    int n = x.length();
    for(int j = 0; j < x.length(); j++){
      int k = x.substr(j).find("bear");
      //cout<<"k="<< k<<endl;
      if(k != -1){
                            //    cout<<x.substr(j).length()<<endl;
        res += x.substr(j).length() - 4 - k + 1;
      }
    }
    cout << res << endl;

  return 0;
}
