#include <stdio.h>
int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; 
    }

int main() {
    int array[10] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int x;
    printf("Enter search elements :");
    scanf("%d",&x);
    int target = x;
    
    int result = binarySearch(array, 10, target);
    
    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);
    
    return 0;
}
