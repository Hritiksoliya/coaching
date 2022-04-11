#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int clrscr();
    float a,b,c,area,s,n;

printf("Enter sides of trengle a b c :");
scanf("%f %f %f",&a,&b,&c);
s = (a+b+c)/2;
n = s *((s-a)*(s-b)*(s-c));
area = sqrt(n);
printf("Area of trengle is : %f",area);
int getch();
return 0;
}