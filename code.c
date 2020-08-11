#include <stdio.h> 
#include <stdlib.h> 
//for  linked list
struct Node
{
    int data;  //it has data
    struct Node* next; //it also has pointer to next node stored in next variable
};


void printlist(struct Node* n)
{
    while(n!=NULL)
    {
        printf(" %d ",n->data);
        n = n->next;
    }
}

int main() {
	//code
	//linked list of three node 
	
	//--------------------CREATING LINKED LIST__________________
	struct Node* head = NULL;//head points to somewhere and it is a pointer to struct Node 
	struct Node* second = NULL;
	struct Node* third = NULL;
	
	//allocate three nodes to heap 
	head = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	
	head->data =1;
	head->next = second;
    // assign data to second node 
    second->data = 2; 
  
    // Link second node with the third node 
    second->next = third; 
    
    third->data = 3;
    second->next = NULL;
    
	//Linked list traversing
	
	printlist(head);
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}