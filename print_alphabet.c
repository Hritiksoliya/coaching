#include <stdio.h>
#include <conio.h>
void print_alpha(void);

void main()
{
    print_alpha();
    return;
}
void print_alpha(void)
{
    //ascii value of A is 65 then we start from 65 num 
    printf("\n\t---In Capital latters---");
    for (int i = 65; i < 91; i++)
    {
        printf("\n\t%c", i);
    }
    //and ascii value of a is 97
    printf("\n\t---In Small latters---");
    for (int i = 97; i < 123; i++)
    {
        printf("\n\t%c", i);
    }
    
}
