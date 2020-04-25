#include <bits/stdc++.h>
using namespace std;
#define aa long long int
int main()
{
    int t;
    cin>>t;
      int flag=0;
    for(int i=0;i<t;i++)
    {
        int n,m,k,l,r;
        cin>>n>>m>>k>>l>>r;
        int t;
        aa p;
      
       
        
        for(int i=1;i<=n;i++)
    {
        
            
          cin>>t>>p;
          int c=0;
        
         while(c<m)
        {
            if(t>(k+1))
            {
                t=t-1;
                c++;
            }
            else if(t<(k-1))
            {
                t=t+1;
                c++;
            }
            else if(t>=(k-1) && t<=(k+1))
            {
                t=k;
                c++;
            }
         
        }
        if((t>=l) && (t<=r))
        {
            cout<<p<<endl;
           
            flag=1;
            break;
            
            
        }
       
     
    }
    if(flag==0)
    cout<<"-1"<<endl;
   
  
        
    }
    return 0;
    
}
    
