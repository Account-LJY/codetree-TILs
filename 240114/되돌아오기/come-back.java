import java.util.Scanner;


public class Main {
    public static int n, r, x, y, time;
    public static char dir;
    public static int[] dx = {1, 0, -1, 0}; // 동 남 서 북
    public static int[] dy = {0, -1, 0, 1}; // 동 남 서 북

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < n; i++) {
            dir = sc.next().charAt(0);
            r = sc.nextInt();

            int dirNum = getNum(dir);
//            move(dirNum, r);
            for (int j = 0; j < r; j++) {
                time++;
                x = x + dx[dirNum];
                y = y + dy[dirNum];
                if (x == 0 && y == 0) {
                    System.out.println(time);
                    return;
                }
            }
        }
        System.out.println(-1);
    }

    private static int getNum(char dir) {
        switch (dir) {
            case 'N': return 3;
            case 'E': return 0;
            case 'S': return 1;
            case 'W': return 2;
            default: return -1;
        }
    }
}