//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
    float celcius;
    float fahrenheit;
    printf("enter the temperature in celcius");
    scanf("%f", &celcius);
    fahrenheit = (celcius*1.8)+32;
    printf("Fahrenheit=%f", fahrenheit);
    return 0;
}