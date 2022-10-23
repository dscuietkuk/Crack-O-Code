package Hacktoberfest;
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
	        Scanner s = new Scanner(System.in);
	        int n = s.nextInt();
	        int[] arr = new int[n];
	        for (int i = 0; i < n; i++) {
	            arr[i] = s.nextInt();
	        }
	        Arrays.sort(arr);
	        socks obj1 = new socks();
	        System.out.println(obj1.sockMerchant(n, arr));
	       
	    }
	}


