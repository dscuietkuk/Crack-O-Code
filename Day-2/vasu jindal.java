import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        
        int[] freq = new int[100];
        for(int i = 0; i < a.length; ++i)
        {
            freq[a[i]]++;
        }
        
        int curBest = 0;
        for(int i = 0; i < 99; ++i)
        {
            curBest = Math.max(curBest, freq[i]+freq[i+1]);
        }
        System.out.println(curBest);
    }
}
