#include <stdio.h>
int findMax(int arr[], int size, int i) {
    if ( i == size -1) {
        return arr[i];
    }
    int max = findMax(arr, size, i+1);
    return max > arr[i] ? max : arr[i];
}
int findMin(int arr[], int size, int i) {
    if ( i == size -1) {
        return arr[i];
    }
    int min = findMin(arr, size, i+1);
    return min < arr[i] ? min : arr[i];
}
int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n, 0);
    int min = findMin(arr, n, 0);
    printf("Max number is: %d \n", max);
    printf("Min number is: %d", min);
    return 0;
}