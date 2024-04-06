// #include<bits/stdc++.h>
// using namespace std;
// void display(int max[],int n){
//   for(int i=0;i<n;i++){
//     cout<<max[i]<<"  ";
//   }
//   cout<<endl;
// }
// int indInsertions(int max[],int size,int element,int capacity,int index){
//     if(size>=capacity){
//         return -1;
//     }
//     for(int i=size+1;i>=index;i--){
//         max[i+1]=max[i];
//     }
//     max[index]=element;
//     return 1;
// }
// int main(){
//     int max[100]={10,20,52,46,78};
//     int size=5,element=67,index;
//     cin>>index;
//     display(max,size);
//     indInsertions(max,size,element,100,index);
//     size+=1;
//     if(max)
//     display(max,size);
//     return 0;
// }
/*Array deletions code*/
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int indDeletions(int arr[],int size,int  element ,int capacity,int index){
    if(size<=capacity){
        return -1;
    }
    for(int i=0;i<index-1;i++){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
int main(){
    int arr[100]={10,20,30,40,50};
    int size=5,element=30,index;
    display(arr,size);
    cin>>index;
    indDeletions(arr,size,element,100,index);
    size-=1;
    display(arr,size);
    return 0;
}