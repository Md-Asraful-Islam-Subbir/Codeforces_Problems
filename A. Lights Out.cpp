#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5],b[5][5];
    //initialize array value 0
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=0;
        }
    }

    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>a[i][j];
        }
    }

// print sum of main light, up light ,down light,right light ,if sum is even pront 0

    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
       //cout<<a[i][j]<<" "<<a[i-1][j]<<" "<<a[i][j-1]<<" "<<a[i+1][j]<<" "<<a[i][j+1]<<" ";
           b[i][j]=a[i][j]+a[i-1][j]+a[i][j-1]+a[i+1][j]+a[i][j+1]+1;
        }
    }

    //printing
     for(int i=1;i<4;i++)
     {
        for(int j=1;j<4;j++)
        {
            if(b[i][j]%2==0)
            {
                cout<<0;
            }
            else
            cout<<1;
        }
        cout<<endl;
    }

}
