//virtual base class//
#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    virtual void speak()=0;
};
class Dog:public virtual Animal{
    public:
    void speak()override{
        cout<<" Woof!"<<endl;
    }
};
class Cat:public virtual Animal{
    public:
    void speak()override{
        cout<<" Meow!"<<endl;
    }
};
class Hybrid:public Dog,public Cat{

};
int main(){
    Animal *animalPtr= new Hybrid();
    animalPtr ->speak();
    delete animalPtr;
    return 0;
}