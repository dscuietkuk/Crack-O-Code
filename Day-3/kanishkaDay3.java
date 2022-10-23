import java.util.*;

class socks {
    int sockMerchant(int n, int[] ar) {
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (ar[i] == ar[i + 1]) {
                i++;
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the number of socks:");
        int n = sc.nextInt();
        System.out.println("enter the color of socks in form of numbers:");
        int[] ar = new int[n];
        for (int i = 0; i < n; i++) {
            ar[i] = sc.nextInt();
        }
        Arrays.sort(ar);
        socks obj1 = new socks();
        System.out.println(obj1.sockMerchant(n, ar));
        sc.close();
    }
}
