import java.util.Scanner;

public class Main {
    public static final int MAX_T = 1000000;

    public static int n, m;
    public static int[] A = new int[MAX_T + 1];
    public static int[] B = new int[MAX_T + 1];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        int timeA = 1;
        for(int i = 0; i < n; i++) {
            char d = sc.next().charAt(0); 
            int t = sc.nextInt();
            
            while(t > 0) {
                if(d == 'R')
                    A[timeA] = A[timeA - 1] + 1;
                else
                    A[timeA] = A[timeA - 1] - 1;
                
                timeA++;
                t--;
            }
        }
        
        int timeB = 1;
        for(int i = 0; i < m; i++) {
            char d = sc.next().charAt(0); 
            int t = sc.nextInt();
            
            while(t > 0) {
                if(d == 'R')
                    B[timeB] = B[timeB - 1] + 1;
                else
                    B[timeB] = B[timeB - 1] - 1;
                
                timeB++;
                t--;
            }
        }
        
        int ans = -1;
        for(int i = 1; i < timeA; i++) {
            if(A[i] == B[i]) {
                ans = i;
                break;
            }
        }
        
        System.out.print(ans);
    }
}