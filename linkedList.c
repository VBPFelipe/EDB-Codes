#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
	int value;
	struct node *next;
}Node;

Node *head = NULL;

void print_list(){
	Node *list = head;
	
	while(list != NULL){
		printf("%d\t", list->value);
		list= list->next;
	}
	printf("\n");
}

void push(int value){
	Node *list = (Node*) malloc(sizeof(Node));
	
	list->value = value;
	list->next = head;
	head= list;
}

void insert_last(int value){
	Node *current = head;
	
	while(current->next != NULL){
		current= current->next;
	}
	
	current->next = (Node*) malloc(sizeof(Node));
	current->next->value = value;
	current->next->next = NULL;
}

Node* pop(){
	Node *tempList = head;
	
	head= head->next;
	
	return tempList; // Return the deleted link
}

Node* delete_last(){
	Node *current = head;
	if(head->next == NULL){
		head= head->next;
		
		return current;
	}
	
	while(current->next->next != NULL)
		current = current->next;
	
	Node *temp = current->next;
	current->next= current->next->next;
	return temp;
}

bool isEmpty(){
	return head == NULL;
}

int length(){
	int length= 0;
	Node *current = (Node*) malloc(sizeof(Node));
	
	for(current= head; current != NULL; current= current->next){
		length++;
	}
	
	return length;
}

Node* find(int value){
	Node *current= head;
	
	if(head == NULL)
		return NULL;
		
	while(current->value != value){
		if(current->next == NULL)
			return NULL;
		else
			current = current->next;
	}
	
	return current;
}

Node* delete(int value){
	Node *current = head;
	Node *previous = NULL;
	
	if(head == NULL)
		return NULL;
		
	while(current->value != value){
		if(current->next == NULL)
			return NULL;
		else{
			previous = current;
			current = current->next;
		}
	}
	
	if(current == head)
		head = head->next;
	else
		previous->next = current->next;
		
	return current;
}

void sort(){
	int i, j, k, tempValue;
	Node *current = (Node*) malloc(sizeof(Node));
	Node *next = (Node*) malloc(sizeof(Node));
	
	int size = length();
	k= size;
	
	for(i= 0; i<size -1; i++){
		current = head;
		next = head->next;
		
		for(j= 1; j<k; j++){
			if(current->value > next->value){
				tempValue = current->value;
				current->value = next->value;
				next->value = tempValue;
			}
			
			current = current->next;
			next = next->next;
		}
	}
}

void reverse(Node **head){
	Node *prev = NULL;
	Node *current = *head;
	Node *next;
	
	while(current != NULL){
		next= current->next;
		current->next= prev;
		prev= current;
		current= next;
	}
	
	*head= prev;
}

int main(){
	
	/*
	push(5);
	insert_last(10);
	insert_last(25);
	insert_last(17);
	
	printf("Original List: ");
	
	print_list();
	
	while(!isEmpty()){
		Node *temp= pop();
		printf("\nDeleted value:");
		printf("(%d)", temp->value);
	}
	
	printf("\nList after deleting all items: ");
	print_list();
	push(10);
	push(20);
	push(30);
	push(1);
	push(40);
	push(56);
	
	printf("New List: ");
	print_list();
	printf("\n");
	
	Node *foundLink = find(1);
	
	if(foundLink != NULL){
		printf("Element found: ");
		printf("(%d) ", foundLink->value);
		printf("\n");
	}
	else
		printf("Element not found.");
	
	delete(1);
	printf("List after deleting an item: ");
	print_list();
	printf("\n");
	foundLink = find(1);
	
	if(foundLink != NULL){
		printf("Element found: ");
		printf("(%d) ", foundLink->value);
		printf("\n");
	}
	else
		printf("Element not found.");
		
	printf("\n");
	sort();
	
	printf("List after sorting the data: ");
	print_list();
	
	reverse(&head);
	printf("\nList after reversing the data: ");
	print_list();
	*/
	
	print_list();
	
	push(5);
	
	print_list();
	
	delete_last();
	
	print_list();
	
	push(10);
	
	print_list();
	
	push(25);
	
	print_list();
	
	pop();
	
	print_list();
	
	insert_last(15);
	insert_last(25);
	
	print_list();
	
	pop();
	
	print_list();
	
	delete_last();
	
	print_list();
	
	
	return 0;
}

