
#include <stdio.h>
int binarySearch(int arr[], int t, int r, int a)
{
	while (t <= r) {
		int m = t + (r - t) / 2;
            if (arr[m] == a)
			return m;
        if (arr[m] < a)
			t = m + 1;
        else
			r = m - 1;
	}
return -1;
}
int main(void)
{
	int arr[] = { 2, 3, 4, 50, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int a =4;
	int result = binarySearch(arr, 0, n - 1, a);
	(result == -1) ? printf("Element is not present"
							" in array")
				: printf("Element is present at "
							"index %d",
							result);
	return 0;
}
