// #include<bits/stdc++.h>
// using namespace std;
// void display(){
//   int n,s,p;
//   cin>>n>>s;
//   //vector<int>v(n);
//   int v[n];
//   for(int i=0;i<n;i++){
//     cin>>v[i];
//   }
//   sort(v,v+n);
//   p=max(v[0],s-v[n-1])*2;
//   for(int i=0;i<n-1;i++){
//     p=max(p,v[i+1]-v[i]);
//   }
//   cout.precision(10);
//   cout<<fixed<<p/2.0<<endl;
// }
// int main(){
//     int t=1;
//     while(t--){
//         display();
//     }
//     return 0;
// }
/**/
// #include<bits/stdc++.h>
// using namespace std;
// void display(){
//   int v[1000000]={0};
//   for(int i=2;i<=1000000;i++){
//     if(v[i]==0){
//       for(int j=2;i*j<=1000000;j++){
//         v[i*j]
//       }
//     }
//   }
// }
/**/
// #include<bits/stdc++.h>
// using namespace std;
// void display(){
// 	int count=0 ;
// 	long long n=0;
// int s,p;
// cin>>s>>p;
// bool flag=1;
// while(flag){
// 	if((n%10==0&&n!=0)||n%10==p){
// 	 break;
// }
// 	count++;
// n+=s;
// }
// cout<<count;
// }
// int main(){
//   int t=1;
//   while(t--){
//     display();
//   }
//   return 0;
// }
/**/
// #include<bits/stdc++.h>
// using namespace std;
// void display(){
// int a,b,c;
// cin>>a>>b>>c;
// int n= max(max(a,b),c);
// int s=abs(n-(a+b+c));
// if(s==n){
//   cout<<"YES\n";
// }else{
//   cout<<"NO\n";
// }
// }
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     display();
//   }
//   return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void display(){
//   string s;
//   cin>>s;
//   if(s=="YES"||s=="yes"||s=="Yes"||s=="yEs"||s=="yeS"||s=="YeS"||s=="yES"||s=="YEs"){
//     cout<<"YES\n";
//   }else{
//     cout<<"NO\n";
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//   while(n--){
//     display();
//   }
//   return 0;
// }
/**/
#include<bits/stdc++.h>
using namespace std;
void display(){
  long long int a,b;
  cin>>a>>b;
  if(b<a){
    swap(a,b);
  }
  long long int sub=0,sum=0,div=0,mod=0;
  sub=b-a;
  div =sub/10;
  mod=sub%10;
  sum=div;
  if(mod>0){
    sum++;
  }
  cout<<sum<<endl;
}
int main(){
  long long int t;
  cin>>t;
  while(t--){
    display();
  }
  return 0;
}