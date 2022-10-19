public class HacktoberFest1 {
	public static void minMaxSum(int arr[]) {
		int max=0;
		int sum=0;
    int min;
		for(int i=0;i<5;i++) {
			sum+=arr[i];
		}
		min =sum;
		for(int i=0;i<5;i++) {
			int sumFinal = sum - arr[i];
			if(sumFinal>max) {
				max=sumFinal;
			}
			else if(sumFinal<min) {
				min=sumFinal;
			}
		}
		System.out.println("The maximum sum is "+ max +" and minimum sum is " + min);
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int arr[]= {1,2,5,3,4};
		minMaxSum(arr);

	}

}
