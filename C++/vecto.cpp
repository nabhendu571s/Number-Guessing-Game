#include<bits/stdc++.h>
using namespace std;
void display(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    display();
    return 0;
}