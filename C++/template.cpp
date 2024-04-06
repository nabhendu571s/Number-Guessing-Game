#include<bits/stdc++.h>
using namespace std;
template<class T>
class MyTemplate{
    private:
    T data;
    public:
    MyTemplate(T value):data(value){

    }
    T getData(){
        return data;
    }
};
int main(){
    MyTemplate<int>intObject(42);
    MyTemplate<double>doubleObject(3.14);
    cout<<intObject.getData()<<endl;
    cout<<doubleObject.getData()<<endl;
    return 0;
}