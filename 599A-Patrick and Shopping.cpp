#include <bits/stdc++.h>

using namespace std;
int main(){
int d1,d2,d3;
cin>>d1>>d2>>d3;
int x=(d1*2)+(d2*2);
int y=(d1+d3+d2);
int z=(d1*2)+(d3*2);
int p=(d2*2)+(d3*2);
int mini_dis=min(x, min(y, min(z, p)));
cout<<mini_dis<<endl;
/*if(x<=y){
cout <<x<<endl;
}
else if(x>y){
cout <<y<<endl;
}
else if(z<=p){
cout <<z<<endl;
}
else if(p<z){
cout <<p<<endl;*/
}

