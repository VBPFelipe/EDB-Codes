#include "linkedList.h"

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

