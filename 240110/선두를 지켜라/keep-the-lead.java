import java.util.Scanner;

public class Main {
    public static int n, m, v, t;
    public static int[] A, B;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();

        A = new int[1000];
        B = new int[1000];
//        C = new int[1000]; // 거리 차이

        int timeA = 1;
        for (int i = 0; i < n; i++) {
            v = sc.nextInt();
            t = sc.nextInt();
            for (int j = 1; j <= t; j++) {
                A[timeA] = A[timeA - 1] + v;
                timeA++;
            }
        }

        int timeB = 1;
        for (int i = 0; i < m; i++) {
            v = sc.nextInt();
            t = sc.nextInt();
            for (int j = 1; j <= t; j++) {
                B[timeB] = B[timeB - 1] + v;
                timeB++;
            }
        }

//        for (int i = 0; i < timeB; i++) {
//            C[i] = A[i] - B[i];
//        }
//
//        int change = 0;
//        for (int i = 1; i < timeB; i++) {
//            if(C[i] > 0 && C[i - 1] <= 0 || C[i] < 0 && C[i - 1] >= 0) {
//                change++;
//            }
//        }
        int change = 0;
        for (int i = 1; i < timeB; i++) {
            if((A[i] - B[i]) > 0 && (A[i - 1] - B[i - 1]) <= 0 || (A[i] - B[i]) < 0 && (A[i - 1] - B[i - 1]) >= 0) {
                change++;
            }
        }
        System.out.println(change - 1);
    }
}