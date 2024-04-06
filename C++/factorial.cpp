#include<bits/stdc++.h>
using namespace std;
class factorial{
    public:
    unsigned long long fact=1;
    int n;
    int input();
    void fact_function();
    void display();

};
int factorial::input(){
    cout<<"Please enter a number :";
    cin>>n;
}
void factorial::fact_function(){
    for(int i=1;i<=n;i++){
        fact*=i;
    }
}
void factorial::display(){
    cout<<" Factorial of entered number is :"<<fact<<endl;
}
int main(){
    factorial object;
    object.input();
    object.fact_function();
    object.display();
}