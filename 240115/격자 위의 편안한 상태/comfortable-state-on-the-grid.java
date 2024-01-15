import java.util.Scanner;

public class Main {
    public static int n, m, x, y;
    public static int[] dx = {1, 0, -1, 0};
    public static int[] dy = {0, 1, 0, -1};
    public static int[][] arr;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();

        arr = new int[n][n];

        for (int i = 0; i < m; i++) {
            x = sc.nextInt();
            y = sc.nextInt();

            arr[x - 1][y - 1] = 1;
            if (check(x - 1, y - 1)) {
                System.out.println(1);
            } else {
                System.out.println(0);
            }
        }
    }
    static boolean check(int x, int y) {
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (inRange(nx, ny) && arr[nx][ny] == 1) {
                cnt++;
            }
        }
        if (cnt == 3)
            return true;
        return false;
    }
    static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
}