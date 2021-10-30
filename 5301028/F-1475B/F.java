import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            int n = sc.nextInt();
            int t = n/2020;
            if(n>=2020*t && n<=2020*t+t){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
