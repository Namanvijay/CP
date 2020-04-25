#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;

};
struct node *head=NULL;
struct node *tail=NULL;

void push(int x)
{
	node *temp=new node();
	temp->data=x;
	if((head)==NULL)
	{
		head=temp;
		tail=temp;
	}
	node *current=head;
	while(current->next!=NULL)
	{
         current=current->next;
	}

	current->next=temp;
	tail=temp;
	tail->next=NULL;


	


}
void printlist(node *head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
int getcount(node *head)
{
	node *temp=head;
	int c=0;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
	return c;
}

void sortlist(int x)
{
	int i=0;
	node* current=head;
	while(i<x-1)
	{
		if((head)->data==2)
		{
			node *temp=head;
			
			head=temp->next;
			
			tail->next=temp;
			tail=temp;
			tail->next=NULL;

			
			current=head;
			

		}
		else if(current->next->data==2)
		{
			node *temp;
			temp=current->next;
			
						
			
			tail->next=temp;
			tail=temp;
			current->next=current->next->next;



			
				
			tail->next=NULL;
				

			

			
			
		

			


		}
		else if(current->next->data==0)
		{
			node *temp;
			temp=current->next;
			current->next=current->next->next;

						
			
			


			temp->next=head;
			head=temp;

			
		
			
	


		}
		else if(current->next->data==1)
		{
			current=current->next;
			
		}
		i++;
	}
}


int main()
{

	int x,y;
	for(int i=0;i<3;i++)
	{
		cin>>x;
		push(x);
	}
	y=getcount(head);
	cout<<y<<endl;
	//printlist(head);

	sortlist(3);

	printlist(head);

	return 0;
}
