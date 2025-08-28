/*
Day 1: Write a program to take two numbers as input
and print their sum.
*/
#include <stdio.h>  

int main(void) {
    int a, b, sum;

    scanf("%d %d", &a, &b);  
    sum = a + b;              

    printf("Sum = %d\n", sum); 

    return 0;
}