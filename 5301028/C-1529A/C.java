import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            int n  =sc.nextInt();
            int[] x=new int[n];
            int min = 1000;
            for(int i=0;i<n;i++){
                x[i] = sc.nextInt();
                min = Math.min(min , x[i]);
            }
            int sum = 0;
            for(int i=0;i<n;i++){
                if(x[i] > min)
                    sum++;
                
            }
            System.out.println(sum);
        }
    }
}