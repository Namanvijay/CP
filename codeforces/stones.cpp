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
		ll a,b,c,ans;
	cin>>a>>b>>c;
	if(b==0)
		cout<<"0"<<endl;
	else if(b==1 && c>=2)
		cout<<"3"<<endl;
	else if(b==1 && c<2)
		cout<<"0"<<endl;
	else if(b>=2 && c<2 && a>=1)
	{
		ll temp=b/2;
       if(a>=temp)
       {
       	a=a-temp;
       	ans=3*temp;
       }
       else
       {
       	ans=3*a;
       	
       }
       cout<<ans<<endl;

		
		

	}
	else if(b>=2 && c>=2 && a<1)
	{
		ll temp=c/2;
		
		if(b>=temp)

		{
			b=b-temp;
			ans=3*temp;
		}
	   else 
	   	ans=3*b;
		cout<<ans<<endl;
	}
	else if(b>=2 && c>=2 && a>=1)
	{

		ll temp=c/2;
		if(b>=temp)
		{
			b=b-temp;
		   ans=3*temp;
		}
		else 
		{
			ans=3*b;
			b=0;
		}
		
		ll x=b/2;
		if(a>=x)
		{
			a=a-x;
			ans=ans+3*x;
		}
		else

		ans=ans+3*a;
		cout<<ans<<endl;


	}
	else if(b>=2 && a<1 && c<2)
		cout<<"0"<<endl;

	}
	return 0;
	


}