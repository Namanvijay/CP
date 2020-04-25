#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void insert(struct node *head,int value)
{
	node *temp=new node;

	temp->data=value;
	
		temp->next=head;
		head=temp;

	
}

void print(struct node *head )
{

	node *temp=new node;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

void mid(struct node *head)
{

	node *sin=new node;
	node *dou=new node;
	while(dou!=NULL)
	{
		
		dou=dou->next->next;
		sin=sin->next;
	}

	cout<<sin->data;
}

int main()
{

	int i;
	struct node *head=NULL;
	for(i=5;i>0;i--)
	{
		insert(head,i);
		print(head);
		mid(head);
	}
	return 0;

}

