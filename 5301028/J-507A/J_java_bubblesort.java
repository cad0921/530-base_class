import java.util.*;
public class main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n = sc.nextInt(), day=sc.nextInt();
		int[][] x=new int[n][2];
		for(int i=0;i<n;i++) {
			x[i][0] = sc.nextInt();
			x[i][1] = i+1;
		}
		bubble_sort(x,n);
		int sum = 0;
		List<Integer> has=new ArrayList<>();
		for(int i=n-1;i>=0;i--) {
			if(sum+x[i][0] > day) {
				break;
			}
			sum+=x[i][0];
			has.add(x[i][1]);
		}
		System.out.println(has.size());
		for(int i=0;i<has.size();i++) {
			
			System.out.print(has.get(i)+" ");
		}
	}
	
	
	public static void bubble_sort(int[][] x , int n) {
		for(int i=0;i<n;i++) {
			for(int j=1;j<n;j++) {
				if(x[j-1][0]<x[j][0]) {
					int temp = x[j-1][0];
					x[j-1][0] = x[j][0];
					x[j][0] = temp;
					
					
					temp = x[j-1][1];
					x[j-1][1] = x[j][1];
					x[j][1] = temp;
				}
			}
		}
	}
}