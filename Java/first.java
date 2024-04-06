import java.util.*;
 class Main{
    public static void main(String[]args){
     Scanner scn= new Scanner(System.in);
       int  a=scn.nextInt();
       int b=scn.nextInt();
       int  c=scn.nextInt();
       int d=scn.nextInt();
       if(a>b&&a>c&&a>d){
        if(b>c&&b>d){
            System.out.println(b);
        }else if(c>b&&c>d){
            System.out.println(c);
        }else {
         System.out.println(d);                 
        }
       }else if(b>a&&b>c&&b>d){
        if(a>c&&a>d){
            System.out.println(a);
        }else if(c>a&&c>d){
            System.out.println(c);
        }else{
            System.out.println(d);
        }
       }else if(c>a&&c>b&&c>d){
        if(a>b&&a>d){
            System.out.println(a);
        }else if(b>a&&b>d){
            System.out.println(b);
        }else{
            System.out.println(d);
        }
       }else if(d>a&&d>b&&d>c){
        if(a>b&&a>c){
            System.out.println(a);
        }else if(b>a&&b>c){
            System.out.println(b);
        }else{
            System.out.println(c);
        }
       }
    }
}