#include "../temp.h" 

// Count the triplets

int countTriplet(int arr[], int n)
{
	int c = 0;
	// Your code goes here
	sort(arr, arr + n);
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (binary_search(arr, arr + n, (arr[i] + arr[j])))
				c++;
	return c;
}