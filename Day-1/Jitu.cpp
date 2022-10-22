#include <bits/stdc++.h>
using namespace std;

int countKdivPairs(int A[], int n, int K)
{
	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((A[i] + A[j]) % K == 0)
				count++;
		}
	}

	return count;
}
int main()
{

	int A[] = { 2, 2, 1, 7, 5, 3 };
	int n = sizeof(A) / sizeof(A[0]);
	int K = 4;
	cout << countKdivPairs(A, n, K);

	return 0;
}
