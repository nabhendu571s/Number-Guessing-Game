#include<bits/stdc++.h>
using namespace std;
class SumNaturalNumber{
    private:
    int number;
    public:
    void Sumnatural(int n){
        number=n;
        int i,sum=0;
        for(i=1;i<=number;i++){
            sum+=i;
        }
        cout<<"Sum of frist "<<number<<" Natural number is "<< sum<<endl;
    }
};
int main(){
    SumNaturalNumber s;
    int n;
    cout<<"Enter the number is n:";
    cin>>n;
    s.Sumnatural(n);
    return 0;
}