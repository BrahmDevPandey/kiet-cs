#include <stdio.h>
#include <conio.h>

void main()
{
    char ch;
    clrscr();
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("%c is a Vowel.", ch);
    else
        printf("%c is a Consonant.", ch);
    printf("\n");
    getch();
}
