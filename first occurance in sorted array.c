#include<stdio.h>
int findFirstOccurrence(int arr[], int N, int x)
{
	int low = 0, high = N - 1;
	int result = -1;
	while (low <= high)
	{
		int mid = (low + high)/2;
		if (x == arr[mid])
		{
			result = mid;
			high = mid - 1;
		}
		else if (x < arr[mid])
			high = mid - 1;
		elseint main(void)
{
	int arr[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int n = sizeof(arr)/sizeof(arr[0]);
	int target = 5;
	int index = findFirstOccurrence(arr, n, target);
	if (index != -1)
		printf("First occurrence of element %d is found at index %d", target, index);
	else
		printf("Element not found in the array");

	return 0;
}			low = mid + 1;
	}
	return result;
}

