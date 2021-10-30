import java.util.*;
public class Main{
     public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt(),day  =sc.nextInt();
        int[][] x=new int[n][2];
        for(int i=0;i<n;i++){
            x[i][0] = sc.nextInt();
            x[i][1] = i+1;
        }
        
        Arrays.sort(x , (a,b) -> a[0]-b[0]);
        List<Integer> all=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(day-x[i][0]<0)
                break;
            day-=x[i][0];    
            all.add(x[i][1]);
        }
        
        System.out.println(all.size());
        for(int i=0;i<all.size();i++){
            System.out.print(all.get(i)+" ");
        }
        
    }
}