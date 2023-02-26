#include<stdio.h>
#include<stdlib.h>
//implementing a linked list

//structures are always defined outside the main function

struct Node{
    int data;
    struct Node *next;
};


void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr = ptr -> next;
    }
}


int main()
{
    struct Node *head;
    struct Node *second;  // --> essentially we are creating three nodes
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));  // ---> for each node we are allocation the size of the struct Node
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));


    head -> data = 7;
    head -> next = second;

    second -> data = 10;
    second -> next = third;

    third -> data = 15;
    third -> next = fourth;

    fourth -> data = 20;
    fourth -> next = NULL;

    linkedListTraversal(head);


}