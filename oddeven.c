#include <stdio.h>
int main() {
    int n, i = 1;
    int number, evenCount = 0, oddCount = 0;  
    printf("Enter the value of n: ");
    scanf("%d", &n);  
    do {
        printf("Enter number %d: ", i);
        scanf("%d", &number);       
        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }      
        i++;
    } while (i <= n);  
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount); 
    return 0;
}
