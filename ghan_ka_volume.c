#include<stdio.h>
#include<conio.h>
int main()
{ 
    
    int l,b,h,v;
printf("Enter the value of l :"); 
scanf("%d",&l);
printf("Enter the value of b :");
scanf("%d",&b);
printf("Enter the value of h :");
scanf("%d",&h);
v=l* b* h;
printf("Volume of Cube : %d",v);
getch();
return 0;
}