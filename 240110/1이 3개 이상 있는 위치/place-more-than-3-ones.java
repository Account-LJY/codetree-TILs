import java.util.Scanner;

public class Main {
    public static int[][] arr;
    public static int[] dx = {0, 1, 0, -1};
    public static int[] dy = {1, 0, -1, 0};
    public static int n;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        sc.nextLine();

        arr = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (validate(arr, i, j)) {
                    count++;
                }
            }
        }
        System.out.println(count);
    }
    public static boolean validate(int[][] arr, int i, int j) {
        int cnt = 0;
        for (int k = 0; k < 4; k++) {
            int nx = i + dx[k];
            if (nx < 0 || nx >= n) {
                continue;
            }
            int ny = j + dy[k];
            if (ny < 0 || ny >= n) {
                continue;
            }
            if (arr[nx][ny] == 1) {
                cnt++;
            }
        }
        if (cnt >= 3){
            return true;
        }
        return false;
    }
}