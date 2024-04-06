#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"\n Enter the value of a ,b,c and d:";
    cin>>a>>b>>c>>d;
    if(a>b&&a>c&&a>d){
        if(b>c&&b>d){
            cout<<"The second largest number is :"<<b<<endl;
        }else
        if(c>b&&c>d){
            cout<<"The second largest number is :"<<c<<endl;
        }else{
            cout<<"The second largest number is :"<<d<<endl;
        }
    }else
    if(b>a&&b>c&&b>d){
        if(a>c&&a>d){
            cout<<"The second largest number is :"<<a<<endl;
        }else
        if(c>a&&c>d){
            cout<<"The second largest number is :"<<c<<endl;
        }else{
            cout<<"The second largest number is :"<<d<<endl;
        }
    }else 
    if(c>a&&c>b&&c>d){
        if(a>b&&a>d){
            cout<<"The second largest number is :"<<a<<endl;
        }else 
        if(b>a&&b>d){
            cout<<"The second largest number is :"<<b<<endl;
        }else{
            cout<<"The second largest number is :"<<d<<endl;
        }
    }else 
    if(d>a&&d>b&&d>c){
        if(a>b&&a>c){
            cout<<"The second largest number is :"<<a<<endl;
        }else 
        if(b>a&&b>c){
            cout<<"The second largest number is :"<<b<<endl;
        }else{
            cout<<"The second largest number is :"<<c<<endl;
        }
    }
    return 0;
}