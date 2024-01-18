import java.util.Scanner;

public class Main {
    public static int count;
    public static String binary;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        binary = sc.nextLine();
        if (binary.equals("1")) {
            System.out.println("0");
            return;
        }
        int num = 0;
        for (int i = 0; i < binary.length(); i++) {
            int a = binary.charAt(i) - '0';
            if (a == 0 && count == 0) {
                a = 1;
                count++;
            }
            num += (int) (a * Math.pow(2, binary.length() - i - 1));
        }
        System.out.println(num);
    }
}