// program to implement string functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20], str3[41];
    int res;
    int length(char[]);
    char* reverseStr(char[]);
    void copyString(char[], char[]);
    void concatString(char[], char[]);
    int compareString(char[], char[]);

    system("clear");
    printf("Enter an string: ");
    scanf("%[^\n]s", str1);

    printf("\nThe size of the string %s is: %d", str1, length(str1));
    printf("\nThe reverse of the string is: %s", reverseStr(str1));

    // reverting the reversed array to obtain the actual array
    reverseStr(str1);

    copyString(str2, str1); // str2 = str1
    printf("\nThe copy of string in %s is %s", str1, str2);

    // concatenating the strings
    copyString(str3, str1);
    concatString(str3, " ");
    concatString(str3, str1);
    printf("\nThe concatenated strings %s and %s is %s", str1, str2, str3);

    // comparison of two strings
    copyString(str2, "Ramanujan");
    res =  compareString(str1, "Ramanujan");
    if(res < 0) 
        printf("\n%s is lexicographically smaller than string Ramanujan.\n", str1);
    else if(res > 0) 
        printf("\n%s is lexicographically greater than string Ramanujan.\n", str1);
    else
        printf("\n%s is lexicographically equal to string Ramanujan.\n", str1);
    return 0;
}

int length(char str[])
{
    int len;
    for(len = 0; str[len] != '\0'; len++);
    return len;    
}

char* reverseStr(char str[])
{
    int i, len = length(str);
    char temp;

    for(i = 0; i < len/2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    return str;
}

void copyString(char dest[], char source[])     // dest = source
{
    int i = 0;
    while(source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';     // appending the null character at the end
}

void concatString(char dest[], char source[])   // dest = dest + source
{
    int len = -1, i = 0;

    while(dest[++len] != '\0');     // traversing to the last index of the destination string
    while(source[i] != '\0') {
        dest[len] = source[i];
        i++;
        len++;
    }
    dest[len] = '\0';       // appending the null character at the end
}

int compareString(char str1[], char str2[])
{
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    if(str1[i] != '\0')
        return 1;
    else if(str2[i] != '\0')
        return -1;
    return 0;
}