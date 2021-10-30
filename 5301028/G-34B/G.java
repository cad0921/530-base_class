import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt() , can = sc.nextInt();
        int[] x=new int[n];
        for(int i=0;i<n;i++)
            x[i] = sc.nextInt();
        Arrays.sort(x);
        int sum = 0;
        for(int i=0;i<can;i++){
            if(x[i]>0)
                break;
            sum+=x[i];
        }
        System.out.println(-sum);
    }
}