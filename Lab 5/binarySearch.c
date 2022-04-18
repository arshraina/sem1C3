#include <stdio.h>
int binarySearch(int arr[], int x, int start, int end);
int sort(int arr[]);
int length, n, x;
int main() {
    printf("enter array length\n");
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i < length; i++) {
        printf("Enter array elements");
        scanf("%d", &n);
        arr[i] = n;
    }
    sort(arr);
    for (int i = 0; i < length; i++){
        printf("%d  ", arr[i]);
    }
    printf("Enter the element to searched for");
    scanf("%d", &x);
    printf("Position of element in sorted array is\n");
    printf("%d\n", binarySearch(arr, x, 0, length-1));
}
int binarySearch(int arr[], int x, int start, int end) {
    int mid = (start + end)/2;
    if (arr[mid] == x) {
        return mid + 1;
    }
    else if (arr[mid] < x) {
        return binarySearch(arr, x, mid + 1, end);
    }
    else {
        return binarySearch(arr, x, start, mid - 1);
    }
}

int sort(int arr[]) {
    for (int i = 0; i < length - 1; i++) {
        int min_pos = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_pos]) min_pos =j;
        }
        if (min_pos != i) {
            int temp = arr[i];
            arr[i] = arr[min_pos];
            arr[min_pos] = temp;
        }
    }
    return 0;
}