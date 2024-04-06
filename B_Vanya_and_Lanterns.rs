#include<bits/stdc++.h>
using namespace std;
void display(){
  int n,s,p;
  cin>>n>>s;
  int v[n];
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v,v+n);
  p=max(v[0],s-v[n-1])*2;
  for(int i=0;i<n-1;i++){
    p=max(p,v[i+1]-v[i]);
  }
  cout.precision(10);
  cout<<fixed<<p/2.0<<endl;
}
int main(){
    int t=1;
    while(t--){
        display();
    }
    return 0;
}