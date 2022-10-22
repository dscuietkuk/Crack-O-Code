import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
         int cnt=0;
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a[] = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        for(int a_i=0; a_i < n-1; a_i++){
          for(int a_j=a_i+1; a_j< n; a_j++){
           if( (a[a_i]+a[a_j])%k==0)
               cnt++;
               
        } 
        }
        System.out.println(cnt);
    }
}
