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

	    if(n==1)
	    {
	    	if(m==1)
	    		cout<<"yes"<<endl;
	    	else 
	    		cout<<"no"<<endl;
	    }

	    else if(n==2)
	    {
	    	if(m<=3)
	    		cout<<"yes"<<endl;
	    	else
	    		cout<<"no"<<endl;
	    }
	    else if(n==3)
	    {
	    	if(m<4)
	    	cout<<"yes"<<endl;
	        else
	        	cout<<"no"<<endl;
	    }
	    else if(n>3)
	    	cout<<"yes"<<endl;
	}
	return 0;
	
}
