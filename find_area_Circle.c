#include<stdio.h>
#include<conio.h>
int main()
{
    int clrscr();
    float  r,a,pi;
    pi=3.142;
    printf("Enter the Radius:");
    scanf("%f",&r);
    a = pi* r* r;
    printf("Area of Circle is :%.2f",a);
    int getch();
return 0;
}