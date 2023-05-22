#include <stdio.h>
int calculateSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + calculateSum(n - 1);
        }}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);  
    int sum = calculateSum(num);  
    for (int i = 1; i < num; i++)
    {
        printf("%d+",i);
    }
    printf("=%d",sum);
    return 0;
}
