// program to implement a stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define NILL -1

typedef struct stack
{
    char a[MAX];
    int top;
} stack;

void push(stack *, char);
char pop(stack *);
char peep(stack);
int isEmpty(stack);
int isFull(stack);

int isEmpty(stack s) {
    if(s.top == NILL)
        return 1;
    else 
        return 0;
}

int isFull(stack s) {
    if(s.top == MAX-1)
        return 1;
    else 
        return 0;
} 

void push(stack *s, char data) {
    if(isFull(*s))
        printf("The stack is full. Can't push.");
    else {
        s->a[++(s->top)] = data;
    }
}

char pop(stack *s) {
    if(isEmpty(*s)) {
        printf("The stack is empty. Can't pop");
        return NILL;
    }
    return s->a[(s->top)--];       
}

char peep(stack s) {
    if(isEmpty(s)) {
        printf("Stack is empty.");
        return NILL;
    }
    return s.a[s.top];
}