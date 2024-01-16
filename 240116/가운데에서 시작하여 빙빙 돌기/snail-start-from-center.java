import java.util.Scanner;

public class Main {
    public static int n, x, y, dirNum, nx, ny;
    public static int[] dx = {0, -1, 0, 1}; // l u r d
    public static int[] dy = {-1, 0, 1, 0};
    public static int[][] arr;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        arr = new int[n][n];
        x = n - 1;
        y = n - 1;

        arr[x][y] = n * n;

        for (int i = n * n - 1; i >= 1; i--) {
            nx = x + dx[dirNum];
            ny = y + dy[dirNum];
            if (!inRange(nx, ny) || arr[nx][ny] != 0) {
                dirNum = (dirNum + 1) % 4;
            }
            x += dx[dirNum];
            y += dy[dirNum];
            arr[x][y] = i;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

    }
    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
}