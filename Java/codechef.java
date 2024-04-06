import java.util.*;
public class codechef {
    public static void main(String[]args){
   // int a,b,c,d,t;
    Scanner scn=new Scanner(System.in);
    int t=scn.nextInt();
    while(t--){
    int a=scn.nextInt();
    int b=scn.nextInt();   
int c=scn.nextInt();
int d=scn.nextInt();
if(a<=c&&b<=d){
    System.out.println("POSSIBLE");
}else{
    System.out.println("IMPOSSIBLE");
}
    }
}
}
