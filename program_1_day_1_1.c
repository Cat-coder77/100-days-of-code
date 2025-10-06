//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19
*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    c = a+b;
    printf("the sum of %d and %d is %d", a, b, c);
    return 0;
}