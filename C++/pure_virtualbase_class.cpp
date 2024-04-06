#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    void fun1(){
        cout<<"Base class fun1"<<endl;
    }
    virtual void fun2()=0;
};
class Derived:public Base{
    public:
    void fun2(){
cout<<"Derived class fun2"<<endl;
    }
};
int main(){
    Derived d;
    d.fun1();
    d.fun2();
    return 0;
}