//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll n,k,l,r,flg=0,p=0;
	cin>>n;
	ll arr[n];
	ll arr1[n];
	for(ll i=0;i<n;i++)
	{

		cin>>arr[i];
		arr1[i]=arr[i];
	}
	ll count=0;
	sort(arr1,arr1+n);
	for(ll i=0;i<n;i++)
	{
		if(arr[i]==arr1[i])
			count++;
	}
	if(count==n)
	{
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
	}
    
    
    else
    {

          for(ll i=0;i<n-1 ,flg<1;i++)
		
			{


		   		if(arr[i]<arr[i+1])
			 	continue;
		       else

			  {


        	    l=i;
            	r=i;
            	while(arr[i]>=arr[i+1] && i<n-1 )
            	{
            		i++;
            		r++;
            
            	}
            	sort(arr+l,arr+r+1);
            	flg++;
			}


		}

		for(ll i=0;i<n;i++)
		{
			if(arr1[i]!=arr[i])
			{
				p=1;
				break;
			}
		}


		if(p==0)
		{
			cout<<"yes"<<endl;
			cout<<l+1<<" "<<r+1<<endl;

		}
		else if(p==1)
			cout<<"no"<<endl;



	  
	   		







    }
    return 0;

	
}