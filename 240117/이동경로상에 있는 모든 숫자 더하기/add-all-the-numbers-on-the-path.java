import java.util.Scanner;

public class Main {
    public static int n, m, x, y, dirNum, sum, nx, ny;
    public static String dir;
    public static int[] dx = {-1, 0, 1, 0}; // U R D L
    public static int[] dy = {0, 1, 0, -1};
    public static int[][] arr;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        n = sc.nextInt();
        m = sc.nextInt();
        sc.nextLine();
        dir = sc.nextLine();

        arr = new int[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        x = y = n / 2;
        sum = arr[x][y];

        for (int i = 0; i < dir.length(); i++) {
            switch (dir.charAt(i)) {
                case 'R':
                    dirNum = (dirNum + 1) % 4;
                    break;
                case 'L':
                    dirNum = (dirNum + 3) % 4;
                    break;
                case 'F':
                    nx = x + dx[dirNum];
                    ny = y + dy[dirNum];
                    if (!inRange(nx, ny))
                        continue;
                    x += dx[dirNum];
                    y += dy[dirNum];
                    sum += arr[x][y];   
            }
        }
        System.out.println(sum);
    }
    public static boolean inRange(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n);
    }
}