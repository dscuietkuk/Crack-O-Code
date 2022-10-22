import java.util.*;
import java.util.Arrays;
import java.util.Scanner;
public class Solution {
	public static int answer (int arr[]) {
		 Arrays.sort(arr);
		 int maxLength=1;
		 int sum=0;
		 for(int i=0;i<arr.length-1 ;i++) {
			 for(int j=i+1;j<arr.length ;j++) {
				 if(arr[j]-arr[i]<=1) {
					 sum=j-i+1;
					 if(sum>maxLength) {
						 maxLength=sum;
					 }
				 } 
			 }
		 }

		 return maxLength; 
	}

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in); 
		int n= sc.nextInt(); 
		int[] arr = new int[n];  
		for(int i=0; i<n; i++)  
		{   
		arr[i]=sc.nextInt();  
		}  
	    System.out.println(answer(arr));	
	}
}
