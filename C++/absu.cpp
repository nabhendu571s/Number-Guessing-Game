/* codechef 694 rating..........
#include <bits/stdc++.h>
using namespace std;
void display(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b){
        if(a<=(b+d)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        if((a+c)>=b){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--){
       display();
   }
   return 0;
}
*/
/*  reverse number , and check the number is equal or not in original number....
#include<bits/stdc++.h>
using namespace std;
void display(){
int n;
cin>>n;

   if(s==n){
    cout<<"The number is equal\n";
   }else{
    cout<<"The number is not equal\n";
   }
}
int main(){
    display();
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
void display(){
 int n;
 cin>>n;
 if(n<10){
    cout<<n;
    return 1;
 }else{
    cout<<n%10;
    return(n/10);
 }
}
int main(){
    display();
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
void display(){
    int n,s,p;
    cin>>n>>s>>p;
    if(n<s&&n<p){
        cout<<" Ram is youngest than other two person: "<<n<<endl;
    }else if(s<n&&s<p){
        cout<<" Sayam is youngest than other two person: "<<n<<endl;
    }else{
        cout<<" Pradip is youngest than other two person: "<<p<<endl;
    }
}
int main(){
    display();
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
void display(){
    int n;
    cin>>n;
    vector<int>v(n);
    
}