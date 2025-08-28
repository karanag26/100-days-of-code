/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main(void) {
    int a, b;
    int sum, diff, product, quotient;

    // Input
    scanf("%d %d", &a, &b);

    // Calculations
    sum = a + b;
    diff = a - b;
    product = a * b;
    quotient = a / b;   // integer division

    // Output
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", sum, diff, product, quotient);

    return 0;
}








