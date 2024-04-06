#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int a;
    A(){
        a=7; 
    }
};
class B: virtual public A{
    public:
    int b;
    B(){
        b=10;
    }
};
class C: virtual public A{
    public:
    int c;
    C(){
        c=20;
    }
};
class D:public B,public C{
    public:
    int d;
    D(){
        d=70;
    }
};
int main(){
    D obj;
    cout<<" a "<<obj.a<<endl;
    cout<<" b "<<obj.b<<endl;
    cout<<" c "<<obj.c<<endl;
    cout<<" d "<<obj.d<<endl;
    return 0;
}