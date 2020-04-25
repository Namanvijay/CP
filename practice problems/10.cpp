
#include <bits/stdc++.h> 
using namespace std; 
class Node 
{ 
    public: 
    int data; 
    Node* next; 

    
    

    
}; 
struct Node *head=NULL;




void sortedInsert(Node **head, int x) 
{ 
    Node* temp=new Node();
    temp->data=x;
    Node* current; 
   
    if (*head == NULL || (*head)->data >= temp->data) 
    { 
        temp->next = *head;
        *head = temp; 
    } 
    else
    { 
      
        current = *head;
        while (current->next!=NULL && 
            current->next->data < temp->data) 
        { 
            current = current->next; 
        } 
        if(current->next==NULL)
            current->next=temp;
        else
        {
               temp->next = current->next; 
               current->next = temp; 
        }  
    }
    
} 



void printList(Node *head) 
{ 
    Node *temp = head; 
    while(temp != NULL) 
    { 
        cout<<temp->data<<" "; 
        temp = temp->next; 
    } 
} 


int main() 
{ 
   
    
    int n;
    for(int i=1;i<=5;i++)
    {
        sortedInsert(&head,i);
    }

   

    cout<<"Created Linked List\n"; 
    printList(head); 
    cout<<"which element u want to insert"<<endl;
    cin>>n;
    
    sortedInsert(&head,n);
    printList(head);


    return 0; 
} 



