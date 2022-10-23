class GFG {
	public static int computeLongestSubarray(int arr[],
												int k)
	{
		int maxLength = 1;
		for (int i = 0; i < arr.length; i++) {
			int minOfSub = arr[i];
			int maxOfSub = arr[i];

			for (int j = i + 1; j < arr.length; j++) {
				if (arr[j] > maxOfSub)
					maxOfSub = arr[j];

				if (arr[j] < minOfSub)
					minOfSub = arr[j];
				if ((maxOfSub - minOfSub) <= k) {
					int currLength = j - i + 1;
					if (maxLength < currLength)
						maxLength = currLength;
				}
			}
		}
		return maxLength;
	}
	public static void main(String[] args)
	{
		int arr[] = { 1, 2, 3, 6, 7 };

		int k = 2;

		int maxLength = computeLongestSubarray(arr, k);
		System.out.println(maxLength);
	}
}
