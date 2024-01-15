import java.util.Scanner;

public class Main {
    public static int n, m, x, y, dirNum, nx, ny;
    public static int[] dx = {0, 1, 0, -1};
    public static int[] dy = {1, 0, -1, 0};
    public static char[][] arr;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        arr = new char[n][m];

        arr[0][0] = 'A';

        for (int i = 1; i < n * m; i++) {
            nx = x + dx[dirNum];
            ny = y + dy[dirNum];
            if (!inRange(nx, ny) || arr[nx][ny] != '\u0000') {
                dirNum = (dirNum + 1) % 4;
            }
            x += dx[dirNum];
            y += dy[dirNum];
            arr[x][y] = (char) ('A' + (i % 26));
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < m);
    }
}