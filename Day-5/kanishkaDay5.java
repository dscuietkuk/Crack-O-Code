import java.util.*;

class beautiful {
    int beautifulTriplets(int d, int[] arr) {
        HashSet<Integer> set = new HashSet<Integer>();
        for (int i = 0; i < arr.length; i++) {
            set.add(arr[i]);
        }
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (set.contains(arr[i] + d) && set.contains(arr[i] + 2 * d))
                count++;
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        beautiful obj1 = new beautiful();
        int count = obj1.beautifulTriplets(d, arr);
        System.out.println(count);
        sc.close();
    }
}
