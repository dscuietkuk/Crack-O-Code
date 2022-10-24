
import java.util.*;
import java.io.*;
import java.text.*;
import java.math.*;

	class Abc {
	    int Merchant(int n, int[] ar) {
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
	        int n = sc.nextInt();
	        int[] arr = new int[n];
	        for (int i = 0; i < n; i++) {
	            arr[i] = sc.nextInt();
	        }
	        Arrays.sort(arr);
	        Abc obj1 = new Abc();
	        System.out.println(obj1.Merchant(n, arr));
	       
	    }
	}
