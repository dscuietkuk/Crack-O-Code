import java.util.*;

class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i = 0 ; i < n ; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println(pickingNumbers(n,arr));
    }

    public static int pickingNumbers(int n,int[] arr) {

        int maxLen = 0;

        for(int i = 0 ; i < n ; i++) {

            int min = arr[i];
            int max = arr[i];

            for(int j = i + 1 ; j < n ; j++) {

                min = Math.min(min, arr[j]);
                max = Math.max(max, arr[j]);

                if(max - min <= 1) {

                    maxLen = Math.max(maxLen, j - i + 1);
                }
            }
        }

        return maxLen;
    }
}
