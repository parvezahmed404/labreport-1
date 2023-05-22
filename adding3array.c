#include <stdio.h>
int main() {
    int arr[3];
    int i, sum = 0; 
    printf("Enter three numbers:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    } 
    printf("The sum of the three numbers is: %d\n", sum);  
    return 0;
}
