#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int arr[b];
    for(int i=0; i<b; i++)
    {
        cin>>arr[i];          //3 2 3
    }
    long long int count=arr[0]-1; //2
    for(int i=0; i<b-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            count+=a-(arr[i]-arr[i+1]);   //5
        }
        else if(arr[i]<arr[i+1])
        {
            count+=arr[i+1]-arr[i];      //6
        }
    }
    cout<<count<<endl;
}
