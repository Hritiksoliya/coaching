#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
   int clrscr();
    printf("Enter the first num :");
    scanf("%d", &a);
    printf("Enter the second num :");
    scanf("%d", &b);
    c = a + b;
    printf("result %d + %d is = %d", a, b, c);
   getch();
    return 0;
    
}