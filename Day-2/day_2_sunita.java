import java.io.*;
import java.util.*;
import java.math.*;
import java.text.*;


public class Abc {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] array = new int[n];
        for(int array_i=0; array_i < n; array_i++){
            array[array_i] = sc.nextInt();
        }
        
        int[] freq = new int[100];
        for(int i = 0; i < array.length; ++i)
        {
            freq[array[i]]++;
        }
        
        int A = 0;
        for(int i = 0; i < 99; ++i)
        {
            A = Math.max(A, freq[i]+freq[i+1]);
        }
        System.out.println(A);
    }
}
