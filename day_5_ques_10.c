//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
int time;
int hours;
int min;
int sec;
printf("enter the value of time in seconds ");
scanf("%d", &time);
hours = time/3600;
time = time-hours*3600;
min = time/60;
time = time-min*60;
sec = time;
printf("%d:%d:%d", hours, min, sec);
return 0;
}