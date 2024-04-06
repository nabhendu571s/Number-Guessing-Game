#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int target;
    cin>>target;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==target)
        break;
        
    }
    cout<<sum<<endl;
    int x=find(arr,n,sum);
    cout<<x<<endl;
}