//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{

		ll n,m,flg=0;
	    cin>>n>>m;

	    while(flg!=1)
	    {

	    	if(n%2!=0 && m>n)
	    	{
	    		ll temp=n;
	    		n=n-1;
	    		if(3*n/2<=temp)
	    		{
	    			
	    			flg=1;
	    		}
	    		
	    	}
	    	else if(n==m)
	    	{
	    		cout<<"yes"<<endl;
	    		break;
	    	}

	    	else if(n%2==0 && n<m)
	    	{
	    		n=3*n/2;

	    	}
	    	else if(n%2==0 && n>m && n!=0)
	    	{
	    		n=n-1;
	    	}
	    	else if(n%2!=0 && n>m)
	    	{
                  n=n-1;
	    	}



	    }
	    if(flg==1)
	    	cout<<"no"<<endl;
	}
	return 0;
	
}
