#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *front=NULL;
    node *rear=NULL;
    node *next=NULL;

    void push(int x)
    {
        node *temp=new node();
        temp->data=x;

        if(front==NULL)
        {
            front=temp;
            rear=temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }

    void pop()
    {
        if(front==NULL)
            cout<<"Underflow condition"<<endl;
        else
        {
            node *temp= front;
            front=front->next;
            free(temp);

        }
    }
    int empty()
    {
          return front==NULL;

    }
  
    int peek()
    {
        if(front==NULL)
        {

            cout<<"Underflow condition"<<endl;
            exit(1);
        }
        else
            return front->data;

    }

};
class stk
{
   public:
    node q1;
    node q2;
    void pushstk(int x)
    {

        if(q1.empty())
        
            q1.push(x);
        
        
            while(!q1.empty())
            {

                   int y=q1.peek();
                   q1.pop();
                   q2.push(y); 
            }
            q1.push(x);
            while(!q2.empty())
            {
                int z=q2.peek();
                q2.pop();
                q1.push(z);
            }
        

    }
    int pullstk()
    {
        int x=q1.peek();
        q1.pop();
        return x;
    }



    
};
int main()
{
    stk s;
    s.pushstk(3);

    s.pushstk(4);
    s.pushstk(5);
    cout<<"Pull element is"<<" "<< s.pullstk()<<endl;
    cout<<"Pull element is"<< " "<<s.pullstk()<<endl;
    return 0;

}