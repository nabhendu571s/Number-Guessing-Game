// #include<bits/stdc++.h>
// using namespace std;
// void display_function(int x){
//     cout<<"x = "<<x<<endl;
// }
// void display_function(int x,int y){
//     cout<<"x = "<<x<<" and y = "<<y<<endl;
// }
// void display_function(int x,int y,int z){
//     cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<endl;
// }
// void display_function(int x,int y,int z,int a){
//     cout<<"x = "<<x<<" and y = "<<y<<" and z = "<<z<<" and a = "<<a<<endl;
// }
// int main(){
//     display_function(5);
//     display_function(5,10);
//     display_function(10,23,57);
//     display_function(10,20,30,40);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void value(float x){
    cout<<" the float value is =  "<<x<<endl;
    
}
void value (int x){
    cout<<" The integer value is = "<<x<<endl;
    
}
void value( char x){
    cout<<" The char value is = "<<x<<endl;
    
}
void value(long long x){
    cout<<" The long long value is = "<<x<<endl;
}
int main(){
    value(5.05f);
    value(10);
    value('h');
    value(5000);
    return 0;
}