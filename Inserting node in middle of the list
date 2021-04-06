#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node *next;
}nodetype , *nodetypeptr;

//global Variable
nodetypeptr head = NULL;
nodetypeptr tmp;

//function prototype
void insertMiddle(int Msize);
void display();
void enqueue(int size);

int main(void){
	int size;
	
	printf("Enter the size of Linked list:");
	scanf("%d", &size);
	enqueue(size);
	
	tmp = head;
	display();
	insertMiddle((size / 2)-1);
	tmp = head;
	display();
	
	
	return 0;
}

void display(){
	if(tmp == NULL){
		printf("NULL\n");
		tmp = head;
		return;
	}
	else{
		printf("%d --> ", tmp->data);
		tmp = tmp->next;
		display();
	}
}
void insertMiddle(int Msize){
	int c;
	nodetypeptr newMiddleNode;
	nodetypeptr thenextnode;
	newMiddleNode = (nodetypeptr)malloc(sizeof(nodetype));
	if(newMiddleNode != NULL){
		printf("Enter The data : ");
		scanf("%d", &newMiddleNode->data);
		newMiddleNode->next = NULL;
		
		for (c = 0 ; c < Msize; c++){
		tmp = tmp->next;
		}
		thenextnode = tmp->next;
		tmp->next = newMiddleNode;
		tmp = tmp->next;
		tmp->next = thenextnode;
		
		
	}
	
	
	else{
		printf("Memory allocation Failed!!");	
	}
	
	
}

void enqueue(int size){
	nodetypeptr newnode;
	nodetypeptr temp;
	newnode = (nodetypeptr)malloc(sizeof(nodetype));
	if(newnode != NULL){
		printf("Enter The data : ");
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		
		if(head == NULL){
			head = newnode;
			tmp = head;
		}
		else{
			tmp->next = newnode;
			tmp = tmp->next;
		}
	}
	else{
		printf("Memory allocation failed!");
	}	
	if(size > 1){
		enqueue(size -1);
	}
	else{
		return;
		free(newnode);
	}
}
