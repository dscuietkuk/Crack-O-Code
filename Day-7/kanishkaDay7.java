import java.util.*;

class same {
    int equalizeArray(int[] arr) {
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                if (arr[i] == arr[j]) {
                    count1++;
                    if (count1 > count) {
                        count = count1;
                    }
                }
            }
            count1 = 0;
        }
        return (arr.length - count);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        same obj1 = new same();
        int count = obj1.equalizeArray(arr);
        System.out.println(count);
        sc.close();
    }
}
