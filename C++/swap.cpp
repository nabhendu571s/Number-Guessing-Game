#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
   
    cout<<"Enter the number of a and b\n";
     cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"The number is :"<<a<<endl<<"The number is :"<<b<<endl;
}