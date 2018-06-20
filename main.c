#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linkedList.h"

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
