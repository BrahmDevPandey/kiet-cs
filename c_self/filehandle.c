#include <stdio.h>

int main(int argc, char *argv[]) 
{
    FILE *in, *out;
    in = fopen(argv[1], "r");
    out = fopen(argv[2], "w");
    if(in == NULL || out == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }

    char *ch;
    while((fscanf(in, "%s", ch)) != EOF) 
    {
        fprintf(out, "%s", ch);
        // printf("%c", ch);
    }
    return 0;
}