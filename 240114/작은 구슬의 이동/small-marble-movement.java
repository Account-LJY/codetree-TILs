import java.util.Scanner;

public class Main {
    public static int n, t, r, c, index;
    public static char dir;
    public static boolean crash;
    public static int[] dx = {-1, 0, 0, 1}; // u, r, l, d
    public static int[] dy = {0, 1, -1, 0};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        t = sc.nextInt();
        r = sc.nextInt();
        c = sc.nextInt();
        dir = sc.next().charAt(0);
        index = getDir(dir);
        crash = sideLine(r, c, index);
        while (t > 0) {
            if (crash) { // 충돌
                index = 3 - index;
                crash = false;
            } else { // 충돌 x
                r += dx[index];
                c += dy[index];
                if (sideLine(r, c, index)){
                    crash = true;
                }
            }
            t--;
        }
        System.out.println(r + " " + c);
    }
    public static int getDir(char dir) {
        if (dir == 'U') {
            return 0;
        } else if (dir == 'D') {
            return 3;
        } else if (dir == 'R') {
            return 1;
        } else {
            return 2;
        }
    }
    public static boolean sideLine(int x, int y, int z) { // u, r, l, d
        if (z == 0 && x == 1) {
            return true;
        } else if (z == 1 && y == n) {
            return true;
        } else if (z == 2 && y == 1) {
            return true;
        } else if (z == 3 && x == n) {
            return true;
        }
        return false;
    }
}