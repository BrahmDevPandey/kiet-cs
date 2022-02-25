// int a;
// int*p =  &a;

// class demo {
//     int i;
//     public: 
//         void foo(demo *d, int data) {
//             // do something with d and data
//         }
// };

// int main()
// {
//     demo d;
//     d.foo(&d, 5);
//     return 0;
// }
#include<iostream>
using namespace std;
  
class Node {
	public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class LinkedList {
	public:
    Node* head;
    LinkedList() {
	 head = NULL; 
	 }
  
    /* Function to reverse the linked list */
    Node*kreverse(int k){
    	if(this->head==NULL){
    		return NULL;
		}
		Node*next=NULL;
		Node*curr=head;
		Node*prev=NULL;
		int count=0;
		while(curr!=NULL && count<k){
			next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
			count++;
		}       
		while(next!=NULL){
			this->head->next=kreverse(k);
		}
		return prev;
	}
  
    /* Function to print linked list */
    void print()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
  
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
  
/* Driver code*/
int main()
{
    /* Start with the empty list */
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
  
    cout << "Given linked list\n";
    ll.print();
  
    ll.kreverse(2);
  
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}