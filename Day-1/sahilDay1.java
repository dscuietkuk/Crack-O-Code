import java.util.*;

class Solution {

    static int divisibleSumPairs(int[] arr, int k) {

        int count = 0;

        for (int i = 0; i < n; i++) {

            for(int j = i + 1 ; j < n ; j++) {

                if((arr[i] + arr[j]) % k == 0) {

                    count++;
                }
            }
        }
        return count;
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            
            arr[i] = sc.nextInt();
        }

        int k = sc.nextInt();

        int pairs = divisibleSumPairs(arr,k);
        
        System.out.println(pairs);

        sc.close();
    }
}