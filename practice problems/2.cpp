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




void sortedInsert(node *head, int r,float f,int x) 
{ 
    node* temp=new node();
    temp->data=x;
    temp->roll=r;
    temp->cgpa=f;
    node* current; 
   
    if (head == NULL || (head)->cgpa <= temp->cgpa) 
    { 
        temp->next = head;
        head = temp; 

    } 
    else
    { 
      
        current = head;
        while (current->next!=NULL && 
            current->next->cgpa > temp->cgpa) 
        
            current = current->next; 
        
       
        
        
               temp->next = current->next; 
               current->next = temp; 
       

       
    }

 }
 void printlist(node *head)
 {
 	node *current=head;
 	while(current!=NULL)
 	{
 		cout<<current->data<<" ";
 		current=current->next;
 	}
 }   

   /* int cutoffcgpa(float x)
    {
         int c=0;
         node *temp=head;
         while(temp->next!=NULL && temp->cgpa>=x)
         {
              c++;
              temp=temp->next;

         }
         cout<<"no of students are "<<c<<endl;
         return c;
        

    }
   void newlistf(int j)
    {
           node *temp=head;
           int i=0;
           while(i<j)
           {
            temp=temp->next;
           }
           temp->next=NULL;
           
    }
    int  cutoffmarks(int x)
    {
    	int count=0;
    	node *temp=head;;
    	while(temp!=NULL && temp->data>=x)
    	{
              count++;
              temp=temp->next;
    	}
    	cout<<"No of students are"<<count<<endl;
    	return count;

    }*/


    int main()
    {
    	int n,m,st,r,j=1,p;
    	float x,s;
    	
    	char ch;
    	do
    	{
    		cout<<"DO U WANT TO INSERT \n press 1: yes \n press 2:no\n";
    	     cin>>n;
    	     switch(n)
    	     {
    	     	case 1:
    	     	cout<<"Enter the roll no,cgpa and marks of student"<<endl;
    	     	cin>>r>>x>>m;
    	     	sortedInsert(head,r,x,m);
    	     	break;
    	     	case 2:
    	     	j=0;
    	     	break;
    	     }

    	}
    	while(j==1);
    	printlist(head);
                
    	        
             /*    do
                 {
                   cout<<"Enter the cutoff cgpa for selection"<<endl;
                   cin>>x;
                   p=cutoffcgpa(x);
                   cout<<"want different cpga press y "<<endl;
                   cin>>ch;

                }
                while(ch=='y');
    	       
    	        

                newlistf(p);
                do
                {
                     cout<<"Enter the cutoff marks for interview"<<endl;
                    cin>>m;
                    st=cutoffmarks(m);
                    cout<<"Wheather u want to change the cutoff marks if yes the press y";
                    cin>>ch;
                }

    	       
    	       
    	        
    	        while(ch=='y');
    	        	

    	        	printlist(st);*/
    	        	return 0;
    	        	



    	   
    	       

    	

    	
   
    	


    	

    }