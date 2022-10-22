package Hacktoberfest;
import java.util.Arrays;
import java.util.Scanner;
public class Day2 {
	public static int pickingNumbers (int arr[]) {
		 Arrays.sort(arr);
		 int maxLength=1;
		 int count=0;
		 for(int i=0;i<arr.length-1 ;i++) {
			 for(int j=i+1;j<arr.length ;j++) {
				 if(arr[j]-arr[i]<=1) {
					 count=j-i+1;
					 if(count>maxLength) {
						 maxLength=count;
					 }
				 } 
			 }
		 }
		
		 return maxLength; 
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in); 
		int n= sc.nextInt(); 
		int[] arr = new int[n];  
		for(int i=0; i<n; i++)  
		{   
		arr[i]=sc.nextInt();  
		}  
	    System.out.println(pickingNumbers(arr));	
	}
}
