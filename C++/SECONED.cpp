#include<bits/stdc++.h>
using namespace std;
void display(long long int a,long long int b,long long  int c,long long int d){
    if(a>b&&a>c&&a>d){
        if(b>c&&b>d){
            cout<<b<<endl;
        }else if(c>b&&c>d){
            cout<<c<<endl;
        }else {
            cout<<d<<endl;
        }
    }else if(b>a&&b>c&&b>d){
        if(a>c&&a>d){
            cout<<a<<endl;
        }else if(c>a&&c>d){
            cout<<c<<endl;
        }else{
            cout<<d<<endl;
        }
    }else if(c>a&&c>b&&c>d){
        if(a>b&&a>d){
            cout<<a<<endl;
        }else if(b>a&&b>d){
            cout<<b<<endl;
        }else{
            cout<<d<<endl;
        }
    }else if(d>a&&d>b&&d>c){
        if(a>b&&a>c){
            cout<<a<<endl;
        }else if(b>a&&b>d){
            cout<<b<<endl;
        }else{
            cout<<d<<endl;
        }
    }
    
}
int  main(){
    long long int t;
    t=1;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        display(a,b,c,d);
    }
    return 0;
}