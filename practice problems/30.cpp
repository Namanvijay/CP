
#include <bits/stdc++.h> 
using namespace std; 

class Node 
{ 
	public: 
	int data; 
	Node *next; 
	Node *prev; 
}; 

Node* reverse(Node *head_ref) 
{ 
	Node *temp = NULL; 
	Node *current = head_ref; 
	
	
	while (current != NULL) 
	{ 
		temp = current->prev; 
		current->prev = current->next; 
		current->next = temp;			 
		current = current->prev; 
	} 
	
	
	if(temp != NULL ) 
		head_ref = temp->prev; 
	return head_ref;
} 




Node* push(Node* head_ref, int new_data) 
{ 

	Node* new_node = new Node(); 

	
	new_node->data = new_data; 
	
	
	new_node->prev = NULL; 

	
	new_node->next = (head_ref);	 

	
	if((head_ref) != NULL) 
	(head_ref)->prev = new_node ; 

	
	(head_ref) = new_node; 
	return head_ref;
} 



void printList(Node *node) 
{ 
	while(node != NULL) 
	{ 
		cout << node->data << " "; 
		node = node->next; 
	} 
} 


int main() 
{ 
	
	Node* head = NULL; 
	
	
	head=push(head, 2);
	head=push(head, 4); 
	head=push(head, 8); 
	head=push(head, 10); 
	
	cout << "Original Linked list" << endl; 
	printList(head); 
	
	
	head=reverse(head); 
	
	cout << "\nReversed Linked list" << endl; 
	printList(head);		 
	
	return 0; 
} 


