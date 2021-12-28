#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    char toLower(char);
    char toUpper(char);
    int isLower(char);
    int isUpper(char);
    int isDigit(char);
    int isAlpha(char);
    int isVowel(char);

    clrscr();
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("\nCharacter to lower case: %c", toLower(ch));
    printf("\nCharacter to upper case: %c", toUpper(ch));
    printf("\nIs character in upper case: %d", isUpper(ch));
    printf("\nIs character in lower case: %d", isLower(ch));
    printf("\nIs character a digit: %d", isDigit(ch));
    printf("\nIs character an alphabet: %d", isAlpha(ch));
    printf("\nIs character a vowel: %d\n", isVowel(ch));

    getch();
}

char toLower(char ch)
{
    if (ch >= 65 && ch <= 90)
        return (ch + 32);
}

char toUpper(char ch)
{
    if (ch >= 97 && ch <= 122)
        return (ch - 32);
}

int isUpper(char ch)
{
    if (ch >= 65 && ch <= 90)
        return 1;
    return 0;
}

int isLower(char ch)
{
    if (ch >= 97 && ch <= 122)
        return 1;
    return 0;
}

int isAlpha(char ch)
{
    if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 97))
        return 1;
    return 0;
}

int isDigit(char ch)
{
    if (ch >= 48 && ch <= 57)
        return 1;
    return 0;
}

int isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        return 1;
    default:
        return 0;
    }
}
