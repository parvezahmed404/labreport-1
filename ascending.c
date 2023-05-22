#include <stdio.h>
int main() {
    int arr[100];
    int size, i; 
    printf("Enter the number of elements: ");
    scanf("%d", &size);   
    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }  
    return 0;
}
