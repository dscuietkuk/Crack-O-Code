import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int[] occurances = new int[101];
        int n = in.nextInt();
        int maxOccurances = 0;
        //int[] a = new int[n];
        for (int i = 0; i < n; i++)
        {
            int ai = in.nextInt();
            occurances[ai]++;
            if (occurances[ai] > maxOccurances)
            {
                maxOccurances = occurances[ai];
            }
        }
        System.out.println(n - maxOccurances);
    }
}
