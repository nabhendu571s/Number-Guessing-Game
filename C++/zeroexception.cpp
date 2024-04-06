#include<bits/stdc++.h>
using namespace std;
int  division(int a,int b){
    if(b===0){
        throw"division by zero!";
    }
    return a/b;
}
int main(){
    int x=50;
    int y=0;
    int ans=0;
    try{
        ans=dision(x,y);
        cout<<"output:"<<ans<<endl;
    }catch(const char *errorMessage){
        cout<<errorMessage<<endl;
    }
    return 0;
}