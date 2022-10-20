import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Arrays;

public class Solution {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    // initialize array

    long arr[] = new long[5];
    long sum = 0;
    // array elements
    for (int i = 0; i < 5; i++) {
      arr[i] = sc.nextLong();
      sum += arr[i];
    }

    // Sorting the array and storing the minimum and maximum values

    Arrays.sort(arr);
    long min = arr[4];
    long max = arr[0];
    long minSum = sum - min;
    long maxSum = sum - max;
    System.out.println(minSum + " " + maxSum);
  }
}
