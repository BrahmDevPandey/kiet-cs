// program to check whether a string is a palindrome
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    int checkPalindrome(char[]);
    system("clear");

    printf("Enter a string: ");
    scanf("%s", str);

    if(checkPalindrome(str))
        printf("%s is a Palindrome.\n", str);
    else
        printf("%s is not a Palindrome.\n", str);
    return 0;
}

int checkPalindrome(char str[]) 
{
    int i, len;
    for(len = 0; str[len] != '\0'; len++);  // calculating length

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}