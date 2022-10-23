import java.util.*;

class findDivisor {
    int findDigits(int n) {
        int count = 0;
        int m = n;
        for (int i = 0; i < n; i++) {
            int result = m % 10;
            if (result == 0) {
                m = m / 10;
                if (m == 0) {
                    break;
                }
                continue;
            } else {
                if (n % result == 0) {
                    count++;
                }
                m = m / 10;
                if (m == 0) {
                    break;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the total numbers you want to calculate for:");
        int num = sc.nextInt();
        for (int i = 1; i <= num; i++) {
            System.out.println("enter the number:");
            int n = sc.nextInt();
            findDivisor obj1 = new findDivisor();
            int count = obj1.findDigits(n);
            System.out.println(count);
        }
        sc.close();
    }
}
