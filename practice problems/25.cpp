#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	int roll;
	float cgpa;
	
	node *next;
};struct node *head=NULL;
struct node *head1=NULL;


void printlist(node *head1)
{
    node *temp=head1;
    while(temp!=NULL)
    {
        cout<<temp->data<<" "<<temp->roll<<" "<<temp->cgpa<<endl;
        temp=temp->next;
    }
}


void sortedInsert( node **head,int r,float f,int x) 
{ 
    node* temp=new node();
    temp->data=x;
    temp->roll=r;
    temp->cgpa=f;
    node* current; 
   
    if (*head == NULL || (*head)->data <= temp->data) 
    { 
        temp->next = *head;
        *head = temp; 

    } 
    else
    { 
      
        current = *head;
        while (current->next!=NULL && 
            current->next->data > temp->data) 
        
            current = current->next; 
        
       
        
        
               temp->next = current->next; 
               current->next = temp; 
       
    }
       
    
 }

 void insert(int r,float f,int d)
 {
    node *temp=new node();
    temp->data=d;
    temp->roll=r;
    temp->cgpa=f;
    if(head1==NULL)
        head1=temp;
    else
    {
        temp->next=head1;
    
    head1=temp;
}
 }
 void cutoffcr(float a,int b)
 {
    node *temp=head;
    int i=0;
    
    while(temp!=NULL && i<b)
    {


        if(temp->cgpa>=a)
        {

            
                insert(temp->roll,temp->cgpa,temp->data);
                i++
        }
        else
        temp=temp->next;    
        
        
    }
 }

  int main()
    {
        int n,j=1,m,r,b;
        float x,a;
        
        
        do
        {
            cout<<"DO U WANT TO INSERT \n press 1: yes \n press 2:no\n";
             cin>>n;
             switch(n)
             {
                case 1:
                cout<<"Enter the roll no,cgpa and marks of student"<<endl;
                cin>>r>>x>>m;
                sortedInsert(&head,r,x,m);
                break;
                case 2:
                j=0;
                break;
             }

        }
        while(j==1);

        cout<<"Enter the cutoff for cgpa and no of students"<<endl;
        cin>>a>>b;
        cutoffcr(a,b);
        
        printlist(head1);
        return 0;
       } 