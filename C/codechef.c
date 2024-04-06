#include<stdio.h>
int display(int a,int b,int c,int d){
    if(a<=c&&b<=d){
        printf("POSSIBLE\n");
    }else{
        printf("IMPOSSIBLE\n");
    }
}
int main(){
    int t;
    scanf( "%d",&t );
    while(t--){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        display(a,b,c,d);
    }
    return 0;
}