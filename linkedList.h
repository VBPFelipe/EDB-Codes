#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node{
	int value;
	struct node *next;
}Node;

void print_list();

void push(int value);

void insert_last(int value);

Node* pop();

Node* delete_last();

bool isEmpty();

int length();

Node* find(int value);

Node* delete(int value);

void sort();

void reverse(Node **head);

#endif
