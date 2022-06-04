// program to find the middle element of the list and reverse the list
#include <stdio.h>
#include <stdlib.h>

typedef struct lklist {
    int data;
    struct lklist *next;
} node;

int main()
{
    void createList(node**, int);   // will crete a list of given size
    void traverse(node*);
    int findMiddle(node*);
    void reverseList(node**);
    node *head = NULL;
    int n, mid;
    
    printf("Enter number of nodes to be inserted into the list: ");
    scanf("%d", &n);
    // creation of list with n nodes
    createList(&head, n);

    // output the initial list
    printf("Initially: \n");
    traverse(head);

    // find and output the middle element of the list using double speed pointer approach
    mid = findMiddle(head);
    printf("The middle of the list is: %d\n", mid);

    // reverse the list and output it
    reverseList(&head);

    // output the reversed list
    printf("After reversing: \n");
    traverse(head);
    return 0;
}

void createList(node **head, int size) {
    int i, data;
    node *head1 = *head;
    printf("Enter data of %d nodes: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        node *temp = (node *)malloc(sizeof(node));
        temp->next = NULL;
        temp->data = data;
        if(*head == NULL) {
            *head = temp;
            head1 = temp;
        } else {
            while(head1->next != NULL) {
                head1 = head1->next;
            }
            head1->next = temp;
        }
    }
}

void traverse(node *head) {
    printf("The list is: \n");
    while(head != NULL) {
        printf("%d --> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int findMiddle(node *head) {
    node *singlePtr = head;
    node *doublePtr = head;
    while(doublePtr != NULL && doublePtr->next != NULL) {
        singlePtr = singlePtr->next;      // move with normal speed
        doublePtr = doublePtr->next->next;      // move with double speed
    }
    return singlePtr->data;
}

void reverseList(node **head) {
    node *prev, *curr, *next;
    prev = NULL;
    next = NULL;
    curr = *head;
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;       // bring head to the last node of the initial list
}