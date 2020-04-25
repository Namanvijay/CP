//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
ll mod=pow(10,9)+7;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll max=abs(b-a);
	    ll p1=c-d;
	    ll p2=c+d;
	    if(a==b)
	    	cout<<"0"<<endl;

	    else if(a<b)
	    {
	    	if(p1==p2)
	    	{
	    		cout<<abs(a-b)<<endl;

	    	}
	    	else if((p1<a && p2<a)|| (p1>b && p2>b))
	    		cout<<abs(a-b)<<endl;
	    	else if(p1<=a && p2>=b)
	    		cout<<"0"<<endl;
	    	else if(p1<=b && p1>=a && p2>=b)
	    	{
	    		ll ans=abs(p1-a);
	    		cout<<ans<<endl;
	    	}
	    	else if(p1<=a && p2>=a && p2<=b)
	    	{
	    		ll ans=abs(b-p2);
	    		cout<<ans<<endl;
	    	}
	    	else if(p1>=a && p1<=b && p2<=b && p2>=a)
	    	{
	    		ll ans=abs(p1-a)+abs(p2-b);
	    		cout<<ans<<endl;
	    	}
	    }
	    else if(b<a)
	    {
	    	if(p1==p2)
	    	{
	    		cout<<abs(a-b)<<endl;
	    	}
	    	else if((p1<b && p2<b)|| (p1>a && p2>a))
	    		cout<<abs(a-b)<<endl;

	    	else if(p1<=b && p2>=a)
	    		cout<<"0"<<endl;
	    	else if(p1<=a && p1>=b && p2>=a)
	    	{
	    		ll ans=abs(p1-b);
	    		cout<<ans<<endl;
	    	}
	    	else if(p1<=b && p2>=b && p2<=a)
	    	{
	    		ll ans=abs(a-p2);
	    		cout<<ans<<endl;
	    	}
	    	else if(p1>=b && p1<=a && p2<=a && p2>=b)
	    	{
	    		ll ans=abs(p1-b)+abs(p2-a);
	    		cout<<ans<<endl;
	    	}
	    }
	}
	return 0;
}