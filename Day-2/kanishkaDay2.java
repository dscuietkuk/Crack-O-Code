import java.util.*;

class findArray {
    int pickingNumbers(int[] a) {
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < a.length; i++) {
            for (int j = i + 1; j < a.length; j++) {
                int num = a[j] - a[i];
                if (num == 1 || num == 0) {
                    count1 = j - i + 1;
                    if (count1 > count) {
                        count = count1;
                    }
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter the length of array:");
        int n = sc.nextInt();
        System.out.println("enter the array:");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        findArray obj1 = new findArray();
        int count = obj1.pickingNumbers(a);
        System.out.println(count);

        sc.close();
    }
}
