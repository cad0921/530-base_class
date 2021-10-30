import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            int m = sc.nextInt();
            int[] x=new int[m];
            long sum = 0;
            for(int i=0;i<m;i++){
                x[i] = sc.nextInt();
                sum+=x[i];
            }
            
            int t = 0;
            if(sum%m==0){
                sum/=m;
                for(int i=0;i<m;i++){
                    if(x[i]>sum)
                    t++;
                }
                
                if(m==1)
                    t = 0;
                System.out.println(t);
            }else{
                System.out.println(-1);
            }
        }
    }
}