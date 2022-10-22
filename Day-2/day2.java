package Hacktoberfest;
import java.util.Arrays;
import java.util.Scanner;
public class Day2 {
	public static int pickingNumbers (int a[]) {
		 Arrays.sort(a);
		 int maxLength=1;
		 int count=0;
		 for(int i=0;i<a.length-1 ;i++) {
			 for(int j=i+1;j<a.length ;j++) {
				 if(a[j]-a[i]<=1) {
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
		int[] a = new int[n];  
		for(int i=0; i<n; i++)  
		{   
		a[i]=sc.nextInt();  
		}  
	    System.out.println(pickingNumbers(a));	
	}
}
