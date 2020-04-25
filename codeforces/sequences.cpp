//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll a1,a2,n;
	cin>>a1>>a2;
	cin>>n;
	ll a3=a2-a1;
	ll a4=a3-a2;
	ll a5=a4-a3;
	ll a6=a5-a4;
    ll p=n%6;
    
    if(p==1)
    {
    	ll m=pow(10,9)+7;
    	if(a1<0)
    	{
    		if(a1==-1*m)
    		{
    			cout<<"0"<<endl;
    		}
    		else
    		{
    			a1=a1%m;
    		cout<<m+a1<<endl;
    		}
    		
    	}
    	else
    	{
    		a1=a1%m;
    		cout<<a1<<endl;
    	}
    }


    else if(p==2)
    {
    	ll m=pow(10,9)+7;
    	if(a2<0)
    	{
    		if(a2==-1*m)
    		
    			cout<<"0"<<endl;
    		else
    		{

    			a2=a2%m;
    		   cout<<m+a2<<endl;
    		}
    		
    	}
    	else
    	{
    		a2=a2%m;
    		cout<<a2<<endl;
    	}
    }


   else  if(p==3)
    {
    	ll m=pow(10,9)+7;
    	if(a3<0)
    	{
    		if(a3==-1*m)
    			cout<<"0"<<endl;

else
{
	a3=a3%m;
    		cout<<m+a3<<endl;
}
    		
    	}
    	else
    	{
    		a3=a3%m;
    		cout<<a3<<endl;
    	}
    }


   else  if(p==4)
    {
    	ll m=pow(10,9)+7;
    	if(a4<0)
    	{


                  
    		if(a4==-1*m)
    			cout<<"0"<<endl;
    		else
    	{
    		a4=a4%m;
    		cout<<m+a4<<endl;
    	}



    	}
    	else
    	{
    		a4=a4%m;
    		cout<<a4<<endl;
    	}
    }


    if(p==5)
    {
    	ll m=pow(10,9)+7;
    	if(a5<0)
    	{
    		if(a5==-1*m)
    			cout<<"0"<<endl;
    		else
    		{ 
    			a5=a5%m;
    		cout<<m+a5<<endl;

    		}
    		
    	}
    	else
    	{
    		a5=a5%m;
    		cout<<a5<<endl;
    	}
    }

    else if(p==0)
    {
    	ll m=pow(10,9)+7;
    	if(a6<0)

    	{

    		if(a6==-1*m)
    			cout<<"0"<<endl;
    		else
    		{

                      a6=a6%m;
    		cout<<m+a6<<endl;

    		}
    		
    	}
    	else
    	{
    		a6=a6%m;
    		cout<<a6<<endl;
    	}
    }



    return 0;


}