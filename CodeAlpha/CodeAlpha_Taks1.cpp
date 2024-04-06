#include<bits/stdc++.h>
using namespace std;
void display(){
cout<<"Welcome To The Number Guessing Game And Enjoy it !"<<endl;
srand(time(0));
int luckyNumber = rand()%100 +1;
int count=0;
int matchNumber;
while(true){
    int n;
    cout<<"Enter the number you try to  guess : ";
    cin>>n;
    while(n--){
    cout<<"Enter your lucky guess number ! between 1 to 100 : ";
    cin>>matchNumber;
    count++;
    if(matchNumber<luckyNumber){
        cout<<"The number is Too low ! Try again and put high number.\n";
    }else if(matchNumber>luckyNumber){
        cout<<"The number is Too High ! Try again and put the low number.\n";
    }else{
        cout<<"Congratulations ! You gussed the lucky number  "<<luckyNumber<<" in just "<<count<<" Attempts.\n";
    }
    }
}
}
int main(){
  display();
  return 0;
}