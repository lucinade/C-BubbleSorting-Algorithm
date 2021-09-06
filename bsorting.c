#include <stdio.h>

void SortArray(int arr[], int n);

int main(void) {

	int arr[] = {5,1,2,1,99,11,100,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	SortArray(arr, n);

	return 0;
}
/* Take in arr and organize it */
void SortArray(int arr[], int n)
{
		
	int i, j;
	
	for (i = 0; i < n-1; ++i)
		for (j = 0; j < n-i-1; ++j)
		{
			if (arr[j] > arr[j+1]) {
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;

			}
}
	for (i=0;i<=n-1;++i)
		printf("%d\n", arr[i]);
}
