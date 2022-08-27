#include<bits/stdc++.h>
using namespace std;
int main(){
    int tisu;
    cin>>tisu;
    while(tisu--){
  long long int row,col;
cin>>row>>col;

vector<vector<long long int>>arr(row,vector<long long int>(col));

arr[0][0] = 1;

long long int ff = 0;
for(long long int jjj = 1;jjj < col;jjj+=2){

    arr[0][jjj] = ff;
    if(jjj+1 < col)
    arr[0][jjj+1] = ff;

    ff= !ff;
}

for(long long int iii = 1;iii < row;iii+=2){

    for(long long int jjj = 0;jjj < col;jjj++){

        arr[iii][jjj] = !arr[iii-1][jjj];
        if(iii+1 < row)
        arr[iii+1][jjj] = !arr[iii-1][jjj];
    }
}

for(long long int iii = 0;iii < row;iii++){

    for(long long int jjj = 0;jjj < col;jjj++){
        cout<<arr[iii][jjj]<<" ";
    }
    cout << endl;
    }
    }
    }
