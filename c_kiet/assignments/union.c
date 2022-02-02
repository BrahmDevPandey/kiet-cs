// program to demo the difference between structure and union
#include <stdio.h>
#include <stdlib.h>

struct st
{
    int i;
    float f;
    double d;
};

union un
{
    int i;
    float f;
    double d;
};

int main()
{
    struct st structObj = {12, 13.5f, 45.5};
    union un unionObj = {12, 13.5f, 45.5};
    system("clear");
      
    //comparing the sizes
    printf("Size of structure object: %u\n", sizeof(structObj));
    printf("Size of union object: %u\n", sizeof(unionObj));

    printf("\nThe values in structure are: i = %d, f = %f, d = %lf\n", structObj.i, structObj.f, structObj.d);
    printf("The values in union are: i = %d, f = %f, d = %lf\n", unionObj.i, unionObj.f, unionObj.d);
    return 0;
}