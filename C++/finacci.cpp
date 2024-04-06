#include<bits/stdc++.h>
using namespace std;
void display(){
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0,num=1,next_am=1;
    for(int i=0;i<n;i++){
        cout<<sum<<" ";
        next_am=sum+num;
        sum=num;
        num=next_am;
    }
}
int main(){
    display();
    return 0;
}