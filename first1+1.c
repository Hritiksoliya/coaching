#include <stdio.h>
#include <conio.h>
int main()
{
    int a;
    int c;
    int b;
    printf("Enter first num \n");
    scanf("%d", &a);
    printf("you enterd :%d\n", a);
    printf("Enter second number\n");
    scanf("%d", &b);
    c = a + b;
    printf("Sum of two num is %d", c);
    return 0;
}