// program to implement a linked list in C using self-referential structure
#include<stdio.h>
#include<stdlib.h>

typedef struct lklist {
    int info;
    struct lklist *next;
}Node;

int main() {
    int choice, data, pos, i;
    Node *head = NULL, *temp = NULL, *prev;

    do {
        system("clear");

        printf("\n-----------MENU-------------");
        printf("\n1. Insert node at beginning");
        printf("\n2. Insert node at end");
        printf("\n3. Insert node after a node");
        printf("\n4. Insert node at a specific position");
        printf("\n5. Delete node from beginning");
        printf("\n6. Delete node from end");
        printf("\n7. Delete node after a node");
        printf("\n8. Delete node at a specific position");
        printf("\n9. Search for a node in list");
        printf("\n10. Display length of the list");
        printf("\n11. Display the entire list");
        printf("\n12. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: //insert at beginning
                    temp = (Node*) malloc(sizeof(Node));
                    printf("Enter data to be inserted: ");
                    scanf("%d", &data);
                    temp = (Node *)malloc(sizeof(Node));
                    temp->info = data;
                    temp->next = head;      // temp starts pointing to the first node
                    head = temp;            // the head starts pointing to temp
                    printf("New node inserted successfully at the beginning!");
                    break;

            case 2: //insert node at the end
                    temp = head;
                    // traversing to the end of the list
                    while(temp->next != NULL)
                        temp = temp->next;
                    // now temp is pointing at the last node
                    Node *newNode = (Node*) malloc(sizeof(Node));
                    printf("Enter data to be inserted: ");
                    scanf("%d", &data);
                    newNode->next = NULL;
                    newNode->info = data;
                    temp->next = newNode;
                    printf("New node inserted successfully at the end!");
                    break;

            case 3: // insert after a particular Node
                    printf("Enter node data after which new node is to be inserted: ");
                    scanf("%d", &pos);
                    temp = head;
                    // traversing to the pos node
                    while(temp != NULL && temp->info != pos)
                        temp = temp->next;
                    
                    if(temp == NULL)
                        printf("%d node not present in the list.", pos);
                    else {
                        Node *newNode = (Node*) malloc(sizeof(Node));
                        printf("Enter data to be inserted after %d: ", pos);
                        scanf("%d", &data);
                        newNode->info = data;
                        newNode->next = temp->next;
                        temp->next = newNode;
                        printf("New node inserted after %d.", pos);
                    }
                    break;
                
            case 4: //insert node at a specific position
                    printf("Enter position at which node is to be inserted: ");
                    scanf("%d", &pos);
                    temp = head;
                    i = 1;
                    // traversing to the pos node
                    while( temp != NULL && i < pos) {
                        i++;
                        temp = temp->next;
                    }

                    // now temp is either pointing to the (pos-1)th node or it is NULL
                    if(temp == NULL) {
                        printf("Only %d nodes are present in the list. No %dth node is present.", i-1, pos);
                    } else {
                        Node *newNode = (Node *) malloc(sizeof(Node));
                        printf("Enter data to be inserted: ");
                        scanf("%d", &data);
                        newNode->info = data;
                        if(pos == 0) { // if node is to be inserted at the head
                            newNode->next = head;
                            head = newNode;
                        } else {
                            newNode->next = temp->next;     // newNode starts pointing to the pos node
                            temp->next = newNode;       // temp(pos-1 th node) starts pointing to newNode, thus newNode becomes the pos node
                        }
                        printf("New node inserted at %dth position.", pos);
                    }
                    break;

            case 5: // delete a node from beginning
                    if(head == NULL) {
                        printf("List is Empty. Can't delete a node.");
                    } else {
                        temp = head;
                        head = head->next;
                        free(temp);
                        printf("Node deleted from the beginning.");
                    }
                    break;
            case 6: // delete node from the ending
                    if(head == NULL) {
                        printf("List is Empty. Can't delete a node.");
                    } else if(head->next == NULL) {  // if only one node is present in the list
                        temp = head;
                        head = NULL;
                        free(temp);
                    } else {
                        temp = head;
                        // traversal to the end of the list
                        while(temp->next->next != NULL)
                            temp = temp->next;

                        Node *toDelete = temp->next;
                        temp->next = NULL;
                        free(toDelete);
                        printf("Node deleted from the ending.");
                    }
                    break;
            
            case 7: // delete node after a given node
                    printf("Enter data of node after which node is to be deleted: ");
                    scanf("%d", &pos);
                    temp = head;    // start from the head
                    while(temp != NULL && temp->info != pos) {
                        prev = temp;
                        temp = temp->next;
                    }
                    if(temp == NULL) {
                        printf("No node with data %d is present in the list.", pos);
                    } else if(temp == head) {
                        head = temp->next;
                    } else {
                        prev->next = temp->next;
                        free(temp);
                        printf("Node after %d deleted successfully.", pos);
                    }
                    break;

            case 8: //delete node at a specific position
                    printf("Enter position from which node is to be deleted: ");
                    scanf("%d", &pos);
                    temp = head;
                    i = 1;
                    // traversing to the pos node
                    while(temp != NULL && i < pos) {
                        i++;
                        temp = temp->next;
                    }

                    // now temp is either pointing to the (pos-1)th node or it is NULL
                    if(temp == NULL) {
                        printf("Only %d nodes are present in the list. No %dth node is present.", i-1, pos);
                    } else {
                        if(pos == 0) {
                            head = temp->next;
                            free(temp);
                        } else {
                            Node *toDelete = temp->next;
                            temp->next = temp->next->next;
                            free(toDelete);
                        } 
                        printf("Node at position %d deleted successfully.", pos);
                    }
                    break;

            case 9: // search for a node in the list
                    printf("Enter data to search in the node: ");
                    scanf("%d", &data);
                    temp = head;
                    pos = 0;
                    while(temp != NULL) {
                        if(temp->info == data) {
                            printf("Node found at position %d.", pos);
                            break;
                        } 
                        temp = temp->next;
                        pos++;
                    }
                    if(temp == NULL)
                        printf("Node not present in the list.");
                    break;

            case 10: // display the length of the list
                    i = 0;
                    temp = head;
                    while(temp != NULL) {
                        i++;
                        temp = temp->next;
                    }
                    printf("Length of list: %d", i);
                    break;

            case 11: // display the whole list
                    temp = head;
                    while(temp!=NULL) {
                        printf("%d --> ", temp->info);
                        temp = temp->next;
                    }
                    printf("NULL");
                    break;

            case 12: // exit
                    break;

            default: printf("\nInvalid choice. Enter again...");
        }
        getchar();
    } while(choice != 12);
    return 0;
}