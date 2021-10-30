import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            long n=sc.nextLong() , m=sc.nextLong() , c=sc.nextLong();
            
            long t = c%n;
            if(t==0)
                t = n;
            
            System.out.println(m*(t-1) + (c+n-1)/n);
            
        }
    }
}