import java.util.Scanner;

public class Main {
    public static int count, sum;
    public static String binary;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        binary = sc.nextLine();

        if (binary.equals("1")) {
            System.out.println(0);
            return;
        } else if (binary.equals("0")) {
            System.out.println(1);
            return;
        }
        int ans = (int) ((binary.charAt(0) - '0') * Math.pow(2, binary.length() - 1));
        for (int i = 1; i < binary.length(); i++) {
            sum = 0;
            for (int j = 1; j < binary.length(); j++) {
                if (j == i) {
                    sum += (int) (Math.abs((binary.charAt(j) - '0') - 1) * Math.pow(2, binary.length() - j - 1));
                } else {
                    sum += (int) ((binary.charAt(j) - '0') * Math.pow(2, binary.length() - j - 1));
                }
            }
            if (count < sum) {
                count = sum;
            }
        }
        System.out.println(ans + count);
    }
}