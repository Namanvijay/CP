//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
/********** code by naman *******/

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
vec v (1000001,0);

ll fun(ll n)
{
	
	
	 	ll c=0;
		
		for(ll j=1;j<=sqrt(n);j++)
		{

			if(n%j==0)
			{
				if(n/j==j)
				{
                      c++;

				}
				else 
					c=c+2;
			}
		}
		return c;
		// v[i]=c;
}

int main()
{
     ll a,b,c;
     ll sum=0;
     cin>>a>>b>>c;
     // fun();
     // cout<<"@@"<<v[4]<<endl;
     for(ll i=1;i<=a;i++)
     {
     	for(ll j=1;j<=b;j++)
     	{
     		for(ll k=1;k<=c;k++)
     		{
     			if(v[i*j*k]==0)
     			{
     				ll d=fun(i*j*k);
     				v[i*j*k]=d;
     				sum=sum+d;
     			}
     			else
     			sum=sum+v[i*j*k];
     			// cout<<"!!!"<<i<<" "<<j<<" "<<k<<" "<<v[i*j*k]<<endl;
     		}
     	}
     }

     sum=sum%1073741824;



cout<<sum<<endl;
return 0;
}
