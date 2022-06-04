// program to implement a stack using array
#include<stdio.h>
#define MAX 10
#define NILL -1

typedef struct stack
{
    int arr[MAX];
    int top;
} stack;

void push(stack*, int);
int pop(stack*);
int peep(stack);
int isEmpty(stack);
int isFull(stack);

int main()
{
    stack s;
    int choice, data;
    s.top = NILL;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peep");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push: ");
            scanf("%d", &data);
            push(&s, data);
            break;
        
        case 2:
            data = pop(&s);
            if(data != -1)
                printf("Popped: %d", data);
            break;
        
        case 3: 
            data = peep(s);
            if(data != -1)
                printf("Value at Top of stack is: %d", data);
            break;

        case 4: 
            printf("Thank You!!!\n");
            break;

        default:
            printf("Invalid choice. Enter again...");
            break;
        }
    } while(choice != 4);
    return 0;
}

void push(stack *s, int data) 
{
    if(isFull(*s))
    {
        printf("Stack is Full.");
        return;
    }
    s->arr[++(s->top)] = data;
    printf("Pushed: %d", data);
}

int pop(stack *s) {
    int data;
    if(isEmpty(*s)) {
        printf("Stack is Empty.");
        return -1;
    }   
    data = s->arr[s->top--];
    return data;
}

int peep(stack s) {
    int data;
    if(isEmpty(s)) {
        printf("Stack is Empty.");
        return -1;
    }   
    data = s.arr[s.top];
    return data;
}

int isFull(stack s) {
    if(s.top == MAX - 1) 
        return 1;
    return 0;
}

int isEmpty(stack s) {
    if(s.top == NILL)
        return 1;
    return 0;
}