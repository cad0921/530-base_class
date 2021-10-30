import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int Case = sc.nextInt();
        while(Case-->0){
            int n = sc.nextInt();
            int[] x=new int[n];
            for(int i=0;i<n;i++){
                x[i] = sc.nextInt();
            }   
            for(int i=0,j=0;i<n;i++){
                if(x[i]%2==0){
                    int temp = x[i];
                    x[i] = x[j];
                    x[j++] = temp;
                }
            }
            int sum = 0;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(gcd(x[i],x[j]*2)>1){
                        sum++;
                    }
                }
            }
            System.out.println(sum);
        }
    }
    public static int gcd(int a ,int b){
        if(b==0)
            return a;
        return gcd(b , a%b);
    }
}