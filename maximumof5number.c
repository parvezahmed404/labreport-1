#include <stdio.h>
int main() {
    int numbers[5], i, maxNum;
    printf("Enter five numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }
    maxNum = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }
    printf("The maximum value is: %d\n", maxNum);
    return 0;
}
