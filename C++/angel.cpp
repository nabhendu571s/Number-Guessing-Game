#include<bits/stdc++.h>
using namespace std;
void display(){
    int x,y,z;
    cin>>x>>y>>z;
    if((x+y+z)==180){
        cout<<"Valid \n";
    }else{
        cout<<"Not valid \n";
    }
}
int main(){
    display();
    return 0;
}