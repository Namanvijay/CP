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
		ll n,k,p,s;
		vector<ll> v;
		cin>>n>>k>>p;
		for(ll i=0;i<n;i++)
		{
			cin>>s;
			v.pb(s);
		}
		ll max=0,min=v[0];
		ll mai=0,mi=0;
		for(ll i=0;i<n;i++)
		{
			if(v[i]>max)
			{
				max=v[i];
				mai=i;
			}
				

	    }
		//cout<<max<<endl;
		//cout<<mai<<endl;
		for(ll i=0;i<n;i++)
		{
			if(v[i]<min)
			{
				min=v[i];
				mi=i;

		
			}
	    }
	   // cout<<min<<endl;
	   //cout<<mi<<endl;	
	  

				
	if(p==0)
		{ 
			if(mi<mai)
			{
				if(k%2==0)
					cout<<v[mai-1]<<endl;
				else
					cout<<v[mai]<<endl;
			}

             else if(mai>mi)
             {
             	if(k%2==0)
             		cout<<v[mai+1]<<endl;
             	else
             		cout<<v[mai]<<endl;
             }       
		}

		else if(p==1)
		{
			if(mi<mai)
			{
				if(k%2==0)
					cout<<v[mi+1]<<endl;
				else 
					cout<<v[mi]<<endl;
			}
			else 
			{
				if(k%2==0)
					cout<<v[mi-1]<<endl;
				else
					cout<<v[mi]<<endl;
			}
		}




	}
	return 0;
}