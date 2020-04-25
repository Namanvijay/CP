//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
#define endl "\n"
#define im INT_MAX
#define vec vector <ll>
#define mps map <ll,ll>  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
       
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       ll x,y,x1,x2,y1,y2;
       cin>>x>>y>>x1>>y1>>x2>>y2;
       ll le=abs(x-x1);
       ll ri=abs(x-x2);
       ll dw=abs(y-y1);
       ll up=abs(y-y2);
       ll flg=0;
       // cout<<le<<" "<<ri<<" "<<dw<<" "<<up<<endl;
       // cout<<abs(a-b)<<" "<<abs(c-d)<<endl;
       if(a<=le && b<=ri && c<=dw && d<=up )
       {
       		cout<<"yes"<<endl;
       		// cout<<"&&&"<<endl;

       }
       else
       {
              ll q=abs(a-b);
              ll p=abs(c-d);
              if(a>=b)
              {
              	if(q>le)
              		flg=1;

              }

              else if(b>a)
              {
              	 if(q>ri)
              	 	flg=1;
              }

              if(c>=d)
              {
              	if(p>dw)
              		flg=1;

              }

              else if(c<d)
              {
              	if(p>up)
              		flg=1;
              }

              if(x==x1 && x==x2 &&(a!=0 || b!=0))
              	// cout<<"no"<<endl;
              	flg=1;

              if(y==y1 && y==y2 && (c!=0 || d!=0))
              	flg=1;


       	   // if((a && abs(x+1)>le)&&(b && abs(x+1)>ri))
       	   // {
       	   // 	 	flg=1;
       	   // 	 	cout<<"^^"<<endl;

       	   // }
       	  
       	   //  // if(b && abs(x+1)>ri)
       	   // 	// flg=1;
       	   
       	   //  if((c && abs(y+1)>dw) &&(d && abs(y+1)>up))
       	   //  {
       	   //  	    cout<<abs(y+1)<<endl;
       	   //  	 	flg=1;
       	   //  	 	cout<<"((("<<endl;

       	   //  }
       	  

       	   if(flg==1)
       	  	cout<<"no"<<endl;
       	  else
       	  	cout<<"yes"<<endl;
       
       	   
       }
       
       
       	    // if(d && abs(y+1)>up)
       	   	// flg=1;
       	   

       	  
    }
return 0;
}
		
