// program to demo the use of string functions from string.h
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20], str3[41];

    clrscr();
    printf("Enter an string: ");
    gets(str1);

    printf("\nThe size of the string %s is: %d", str1, strlen(str1));
    printf("\nThe reverse of the string %s is: %s", str1, strrev(str1));

    // reverting the reversed array to obtain the actual array
    reverse(str1);

    strcpy(str2, str1); // str2 = str1
    printf("\nThe copy of string in %s is %s", str1, str2);

    // concatenating the strings
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str1);
    pritnf("\nThe concatenated strings %s and %s is %s", str1, str2, str3);

    strcpy(str2, "Ramanujan");
    printf("\nThe result of comparison of %s and string \"Ramanujan\" is %d", str1, strcmp(str1, "Ramanujan"));

    getch();
    return 0;
}
