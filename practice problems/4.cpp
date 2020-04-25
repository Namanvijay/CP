#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,x1,x2,x3,c1=0,c2=0,c3=0;
    cin>>n1>>n2>>n3;
    queue <int> q1;
     queue <int> q2;
      queue <int> q3;
      for(int i=0;i<n1;i++)
      {
          cin>>x1;
          q1.push(x1);
          c1=c1+x1;
      }

     for(int i=0;i<n2;i++)
      {
          cin>>x2;
          q2.push(x2);
          c2=c2+x2;
      }
      
      for(int i=0;i<n3;i++)
      {
          cin>>x3;
          q3.push(x3);
          c3=c3+x3;
      }
      while(1)
      {
          if((c1==c2) && (c2==c3))
          {
            cout<<c1<<endl;
            break;
          } 
          else if((c1>=c2) && (c1>=c3))
          {
              c1=c1-q1.front();
              q1.pop();
              
          } 
           else if((c2>=c1) && (c2>=c3))
          {
              c2=c2-q2.front();
              q2.pop();
          } 
           else if((c3>=c2) && (c3>=c1))
          {
              c3=c3-q3.front();
              q3.pop();
          } 
          
      }    
            return 0;


}