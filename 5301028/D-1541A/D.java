import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            int n = sc.nextInt();
            if(n%2==0) {
                for (int i = 2; i <= n; i += 2) {
                    System.out.print(i+" "+(i-1)+" ");
                }
            }  
            else{
                for (int i = 2; i <= n-2; i += 2) {
                    System.out.print(i+" "+(i-1)+" ");
                }
                System.out.print(n+" "+(n-2)+" "+(n-1));
            }
            System.out.println();
        }
    }
}