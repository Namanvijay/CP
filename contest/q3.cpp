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
      ll n;
      cin>>n;
      string s;
      vector <char> v(n);
      ll a,b;
      ll st[n],en[n];
      vec v1(1445,0),v2(1445,0);
      for(ll i=0;i<n;i++)
      {
      	 cin>>st[i]>>en[i];



      }
      v[0]='c';
      ll q=0;
      ll flg=1;
      for(ll i=st[0]+1;i<=en[0]-1;i++)
      	v1[i]=1;

      for(ll i=1;i<n;i++)
      {

      	 if((st[i]>=en[i-1]) ||(en[i]<=st[i-1]))
      	 {
      	 	if(v[i-1]=='c')
      	 	{

      	 		v[i]=v[i-1];
      	 		ll flg=1;
      	 	
      	 	

      	 	    for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    {
      	 	    	if(v1[j]==0)
      	 	    		continue;
      	 	    	else
      	 	    	{
      	 	    		
      	 	    		flg==2;
      	 	    		break;
      	 	    	}
      	 	    }

      	 	    if(flg==2)
      	 	    {
      	 	    	v[i]='l';
      	 	    	for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    	{
      	 	    		if(v2[j]==0)
      	 	    			v2[j]=1;
      	 	    		else
      	 	    		{
      	 	    			q=1;
      	 	    			break;
      	 	    		}
      	 	    	}
      	 	    	// flg=1;
      	 	    }

      	 	    else if(flg==1)
      	 	    {
      	 	    	for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    	{
      	 	    		if(v2[j]==0)
      	 	    			v2[j]=1;
      	 	    		
      	 	    	}

      	 	    }


      	 	    


      	 		
      	 	

      	 	}

      	 	else
      	 	{
      	 		v[i]=v[i-1];
      	 		ll flg=1;

      	 		 for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    {
      	 	    	if(v2[j]==0)
      	 	    		continue;
      	 	    		// v2[j]=1;
      	 	    	else
      	 	    	{
      	 	    		flg=2;
      	 	    		break;
      	 	    	}
      	 	    }

      	 	    if(flg==2)
      	 	    {
      	 	    	v[i]='c';
      	 	    	for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    	{
      	 	    		if(v1[j]==0)
      	 	    			v1[j]=1;
      	 	    		else
      	 	    		{
      	 	    			q=1;
      	 	    			break;
      	 	    		}
      	 	    	}
      	 	    	// flg=1;
      	 	    }

      	 	     else if(flg==1)
      	 	    {
      	 	    	for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    	{
      	 	    		if(v2[j]==0)
      	 	    			v2[j]=1;
      	 	    		
      	 	    	}

      	 	    }

      	 	}
      	 	

      	}

      	 else
      	 {
      	 	if(v[i-1]=='c')
      	 	{

      	 		v[i]='l';
      	 			// ll flg=1;
      	 		 for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    {

      	 	    	if(v2[j]==0)
      	 	    		v2[j]=1;
      	 	    	else
      	 	    	{
      	 	    		// flg=2;
      	 	    		q=1;
      	 	    		break;
      	 	    	}
      	 	    }

      	 	    

      	 	}

      	 	else
      	 	{
      	 		v[i]='c';
      	 		// ll flg=1;
      	 		 for(ll j=st[i]+1;j<=en[i]-1;j++)
      	 	    {
      	 	    	
      	 	    	if(v1[j]==0)
      	 	    		v1[j]=1;
      	 	    		// continue;
      	 	    	else
      	 	    	{
      	 	    		q=1;
      	 	    		// flg=2;
      	 	    		break;
      	 	    	}
      	 	    }

      	 	  
      	 	}
      	 	

      	 }

      	 if(q==1)
      	 	break;

      }

      if(q==1)
      	cout<<"no"<<endl;
      else
      {
      	for(ll i=0;i<v.size();i++)
      		cout<<v[i];  
      		cout<<endl;   
      }
    }
return 0;
}
		
