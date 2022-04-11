#include <stdio.h>
#include <conio.h>
void main()
{
    char std1[20], std2[20];
    int roll1, roll2;
    printf("\n\tEnter first student Name :");
    gets(std1);
    printf("\n\tEnter second student Name :");
    gets(std2);
    printf("\n\tEnter first student roll number :");
    scanf("%d", &roll1);
    printf("\n\tEnter second student roll number :");
    scanf("%d", &roll2);
    printf("\n\t\a---------------\n\t\aStudent Name");
    printf("\n\t\a1. %s", std1);
    printf("\n\t\a2. %s", std2);
    printf("\n\t\a---------------\n\t\aStudent Roll No.");
    printf("\n\t\a1. %d", roll1);
    printf("\n\t\a2. %d", roll2);
    printf("\n\t\a---------------");
    return;
}