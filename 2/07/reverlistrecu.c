/*program to reverse a linked list*/


#include <stdio.h>
#include <stdlib.h>
 

struct Node
{
    int data;
    struct Node* next;
};
 

void printList(struct Node* head)
{
    struct Node* ptr = head;
    while (ptr)
    {
        printf("%d —> ", ptr->data);
        ptr = ptr->next;
    }
 
    printf("NULL\n");
}
 


void push(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
 
    *head = newNode;
}
 

void recursiveReverse(struct Node* head, struct Node** headRef)
{
    struct Node* first;
    struct Node* rest;
 
   
    if (head == NULL) {
        return;
    }
 
    first = head;           
    rest = first->next;     
 
    
    if (rest == NULL)
    {
    
        *headRef = first;
        return;
    }
 
    
    recursiveReverse(rest, headRef);
 
    
    rest->next = first;
    first->next = NULL;     
}
 

void reverse(struct Node** head) {
    recursiveReverse(*head, head);
}
 
int main(void)
{

    int data[] = { 11, 12, 13, 14, 15, 16 };
    int n = sizeof(data)/sizeof(data[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >=0; i--) {
        push(&head, data[i]);
    }
 
    reverse(&head);
    printList(head);
 
    return 0;
}






#if 0



krupa@krupa-VirtualBox:~/krupa$ gcc  reverlistrecu.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
6 —> 5 —> 4 —> 3 —> 2 —> 1 —> NULL
krupa@krupa-VirtualBox:~/krupa$ gcc  reverlistrecu.c
krupa@krupa-VirtualBox:~/krupa$ ./a.out
16 —> 15 —> 14 —> 13 —> 12 —> 11 —> NULL
krupa@krupa-VirtualBox:~/krupa$ ^C
krupa@krupa-VirtualBox:~/krupa$ 

#endif