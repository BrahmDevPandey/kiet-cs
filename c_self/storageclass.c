// program to demo the cocept of storage classes in c
#include <stdio.h>

int a = 10;
int main()
{
    void f(void);
    int a = 20;     // an auto strorage class variable
    register int b = 10;    // a register storage class variable

    printf("local a = %d\n", a);
    // printf("global a = %d\n", ::a);      // gives error in gcc
    printf("register b = %d\n", b);

    // calling the function f() to demo the static behaviour of variable
    f();
    f();
    f();
    return 0;
}

void f()
{
    static int a = 20;      // a static variable
    printf("static a = %d\n", a++);  
}