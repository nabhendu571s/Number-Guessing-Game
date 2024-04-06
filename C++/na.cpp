/*Array second largest number findd out */
#include<bits/stdc++.h>
using namespace std;
void display(){
  int v;
  cin>>v;
  int arr[v];
  for(int i=0;i<v;i++){
    cin>>arr[i];
  }
  int largest = arr[0];
  int secondLargest = arr[0];
  for (int i = 1; i < v; i++) {
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
    } else if (arr[i] > secondLargest) {
      secondLargest = arr[i];
    }
  }
  int sum=secondLargest+largest;
  cout<<sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    display();
    }
    return 0;
}