import java.util.*;
public class C {
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int N = sc.nextInt();
		while(N-->0){
			int n = sc.nextInt();
			int[] x=new int[n];
			for(int i=0;i<n;i++)
				x[i] = sc.nextInt();
			Arrays.sort(x);
			
			double t = x[n-1];
			double m = 0;
			for(int i=0;i<n-1;i++)
				m += x[i];
			
			m/=(n-1);
			
			System.out.printf("%.9f\n" , t+m);
		}
	}
}