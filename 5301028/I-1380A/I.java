import java.util.*;
public class HelloWorld{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        
        int Case = sc.nextInt();
        while(Case-->0){
            int n = sc.nextInt();
            int[] x=new int[n];
            for(int i=0;i<n;i++){
                x[i] = sc.nextInt();
            }
            int in = 0;
            for(int i=1;i<n-1;i++){
                if(x[i]>x[i-1] &&x[i]>x[i+1]){
                    in = i;
                    break;
                }
            }
            if(in!=0){
                System.out.println("YES");
                System.out.printf("%d %d %d\n",in,in+1 , in+2);
            }else{
                System.out.println("NO");
            }
        }
     }
}