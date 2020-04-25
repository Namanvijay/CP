
#include <bits/stdc++.h> 
using namespace std; 


class Node { 
public: 
	int data; 
	Node* next; 
}; 
struct Node *head=NULL;


Node* SortedMerge(Node* a, Node* b); 
void midvalue(Node* head, 
                    Node** h1, Node** h2); 



void MergeSort(Node** head) 
{ 
	 
	Node* head1=*head;
	Node* a; 
	Node* b; 


	if ((head1 == NULL) || (head1->next == NULL)) 
		
		return;
	

	
	midvalue(head1, &a, &b); 
 
	
	MergeSort(&a); 
	MergeSort(&b); 

	
	*head = SortedMerge(a, b); 
} 

Node* SortedMerge(Node* a, Node* b) 
{ 
	Node* result = NULL; 

	if (a == NULL) 
		return (b); 
	else if (b == NULL) 
		return (a); 

	
	if (a->data <= b->data) { 
		result = a; 
		result->next = SortedMerge(a->next, b); 
	} 
	else { 
		result = b; 
		result->next = SortedMerge(a, b->next); 
	} 
	return (result); 
} 

void midvalue(Node* head, 
					Node** h1, Node** h2) 
{ 
	Node* fast; 
	Node* slow; 
	slow = head;
	fast=head->next;
	while(fast!=NULL)
	{
		fast=fast->next;

		if(fast!=NULL)
		{
			slow=slow->next;
			fast=fast->next;
		}
	} 

  
	*h1=head;
	*h2=slow->next;
	slow->next=NULL; 
} 

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data << " "; 
		node = node->next; 
	} 
} 


void push(Node** head_ref, int new_data) 
{ 
	
	Node* new_node = new Node(); 


	new_node->data = new_data; 

	
	new_node->next = (*head_ref); 

	
	(*head_ref) = new_node; 
} 


int main() 
{ 

	int n,a;
	do{
        
        	cout<<"press \n 1.PUSH \n 2.PRINT\n 3.SORT \n 4.EXIT\n";
	      cin>>n;
	    switch(n)
	 {
		case 1:
		cin>>a;
		push(&head,a);
		break;
		case 2:
		printList(head);
		break;
		case 3:
			MergeSort(&head);
			break;
		case 4:
		exit(0);


	}

	  }
	  while(1);


	


	

	

	return 0; 
} 

