#include<bits/stdc++.h>
using namespace std;
class perfact{
    private:
    int num,i,st,end,sum;
    public:
    void in(){
        cout<<"Enter starting number :";
        cin>>st;
        cout<<"Entre ending number :";
        cin>>end;

    }
    void disp(){
        for(num=st;num<=end;num++){
            i=1;
            sum=0;
            while(i<num){
                if(num%i==0)
                sum+=i;
                i++;
            }
            if(sum==num)
            cout<<"The perfact number within the given range ="<<num<<endl;
        }
    }
};
int main(){
    perfact obj;
    obj.in();
    obj.disp();
}