#include <stdio.h>

int sort(int arr[]);
int length, n, count = 1;
int main() {
  printf("enter array length\n");
  scanf("%d", &length);
  int arr[length];
  for (int i = 0; i < length; i++) {
    printf("Enter array element");
    scanf("%d", &n);
    arr[i] = n;
  }
  sort(arr);
  for (int i = 0; i < length; i++) {
    if (i == length - 1 || arr[i] != arr[i+1]){
        printf("%d is appearing %d times, ", arr[i-1], count);
    }
    else if (arr[i] == arr[i+1]) {
        count++;
    }
  }

  return 0;
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