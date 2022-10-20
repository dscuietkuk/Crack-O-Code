import java.util.Scanner;

class divide {

    int divisibleSumPairs(int n, int[] ar, int k) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j > i; j--) {
                if (i != j) {
                    int num = 0;
                    num = ar[i] + ar[j];
                    if (num % k == 0) {
                        count++;
                    }
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the value of elements you want in array and the number you want to divide with");
        int n = sc.nextInt();
        int k = sc.nextInt();

        int[] ar = new int[n];

        for (int i = 0; i < n; i++) {
            ar[i] = sc.nextInt();
        }

        divide a1 = new divide();
        int count = a1.divisibleSumPairs(n, ar, k);
        System.out.println(count);

        sc.close();
    }
}
