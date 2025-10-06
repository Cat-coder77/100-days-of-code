//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include<stdio.h>
int main(){
    int a;
    int b;
    int swap;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    //before swap
    printf("before swap %d, %d  ", a, b);
    //after swap
    swap = a;
    a = b;
    b = swap;
    printf("after swap %d, %d", a, b);
    return 0;
}