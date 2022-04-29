// program to convert a given infix expression to postfix and finally 
// evaluate it using stack
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "stackInfix.c"
#define NILL -1
typedef char* string;

string infix2postfix(string);
int isOperator(char);
int evaluatePostfix(string);
int precedence(char);

int main() {
    string input, postfix;
    int result;
    input = (string) malloc(40*sizeof(char));
    system("cls");

    printf("\n------------------INSTRUCTIONS TO USE-----------------------");
    printf("\n1. The input expression must have less than 40 symbols");
    printf("\n2. Only binary operators are allowed");
    printf("\n2. Only single digit operands are allowed");
    printf("\n3. No whitespace characters are allowed in the expression");
    printf("\n***** The program may behave abnormally if the above rules are not followed *****");
    printf("\n------------------------------------------------------------\n");
    printf("\nEnter an expression in infix notation: \n");
    scanf("%s", input);
    printf("You entered: %s", input);

    postfix = infix2postfix(input);
    printf("\nThe postfix equivalent of given infix expression is: \n%s", postfix);
    return 0;
}

string infix2postfix(string input) {
    string postfix = (string) malloc(40*sizeof(char));
    int postMark = 0, i, len, val;
    char ch;
    stack s;
    s.top = NILL;

    /** Step 1.(i) **/
    push(&s, '(');
    /** Step 1.(ii) **/
    input = strcat(input, ")");
    len = strlen(input);

    /** Step 2 **/
    // conversion code
    for(i = 0; i < len; i++) {
        ch = input[i];
        /** Step 3 **/
        if(isdigit(ch) || isalpha(ch)) {
            postfix[postMark] = ch;
            postMark++; 
        }
        /** Step 4 **/
        else if(ch == '(') {
            push(&s, ch);
        }
        /** Step 5 **/
        else if(isOperator(ch)) {
            /** Step 5.(i) **/
            while(precedence(ch) >= precedence(peep(s))) {
                postfix[postMark] = pop(&s);
                postMark++;
            }

            /** Step 5.(ii) **/
            push(&s, ch);
        }

        /** Step 6 **/
        else if(ch == ')') {
            /** Step 6.(i) **/
            while(peep(s) != '(') {
                postfix[postMark] = pop(&s);
                postMark++;
            }

            /** Step 6.(ii) **/
            pop(&s);
        }
    }

    return postfix;
}

int isOperator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
        return 1;
    return 0;
}

int precedence(char ch) {
    // not checking whether it is an operator because it has been done already in the caller function
    /**
    if(!isOperator(ch))
        return -1;
    **/

   switch (ch)
   {
        case '/':
        case '*':
        case '%': return 4;
        case '+':
        case '-': return 3;
        default: printf("Invalid operator %c encountered in precedence function.", ch);
                return -1;
   }    
}