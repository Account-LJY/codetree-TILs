import java.util.Scanner;

public class Main {
    public static int n, m, x, y, dirNum, nx, ny;
    public static int[] dx = {0, 1, 0, -1}; // r, d, l, u
    public static int[] dy = {1, 0, -1, 0};
    public static int[][] arr;

    public static boolean inRange(int x, int y) {
        return (0 <= x && x < n && 0 <= y && y < m);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();

        arr = new int[n][m];
        arr[x][y] = 1; // 초기값
        for (int i = 2; i <= n * m; i++) {
            nx = x + dx[dirNum];
            ny = y + dy[dirNum];
            if (!inRange(nx, ny) || arr[nx][ny] != 0) {
                dirNum = (dirNum + 1) % 4;
            }
            x = x + dx[dirNum];
            y = y + dy[dirNum];
            arr[x][y] = i;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}