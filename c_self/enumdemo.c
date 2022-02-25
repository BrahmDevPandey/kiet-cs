// program to demo the use of enums in c
#include <stdio.h>

int main()
{
    enum planets {
        mercury = 1,
        venus,
        earth,
        mars,
        jupiter,
        saturn,
        uranus,
        neptune
    };
    
    int input;
    printf("Enter the planet number: ");
    scanf("%d", &input);

    if(input >= mercury && input <= mars)
        printf("It is a terrestrial planet.");
    else if(input >= jupiter && input <= neptune)
        printf("It is a gaseous planet.");
    else
        printf("This planet doesn't belong to our solar system.");
    printf("\n");
    return 0;
}