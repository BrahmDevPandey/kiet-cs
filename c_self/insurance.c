#include <stdio.h>
#include <conio.h>
void main()
{
    int amount, age;
    char g, s;
    clrscr();
    printf("Enter Your Gender(m/f): ");
    scanf("%c", &g);
    fflush(stdin);
    printf("Do you Smoke(y/n): ");
    scanf("%c", &s);
    printf("Enter your Age: ");
    scanf("%d", &age);
    if (age > 20 && age <= 30)
        amount = 1000;
    else if (age > 30 && age <= 40)
        amount = 1500;
    else if (age > 40 && age <= 50)
        amount = 2000;
    else if (age > 50 && age <= 60)
        amount = 4000;
    else
    {
        printf("Insurance is not allowed");
        return;
    }
    printf("Amount to be paid is %d\n", amount);
    if (g == 'f')
    {
        amount = amount - (amount / 10);
        printf("Amount to be paid after discount is %d\n", amount);
    }
    printf("********************\n");
    if (s == 'y')
    {
        amount = amount + (amount / 10);
        printf("Amount to be paid after increment is %d\n", amount);
    }
    getch();
}