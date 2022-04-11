#include<stdio.h>
#include<conio.h>
int main()
{   
    int v,fh;
  
    printf("thise function for calsicus to Ferenhite converson\n");
   for (int i = 0; i < 10; i++)
   {   
    printf("\nEnter the value of calsiaus \n");
scanf("%d",&v);
fh = (v)*(1.8)+32 ;

printf("the %dC is %dF",v,fh);
   }

   printf("\nthank you for using this programe\n");
return 0;
}