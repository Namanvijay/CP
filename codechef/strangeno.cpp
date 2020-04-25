

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"

#define vec vector <ll>
#define mps map <ll,ll>  

void checker(ll n,ll k)
{
	vec v;
	while(n%2==0)
	{
		v.pb(2);
		n=n/2;
	}
	for(ll i=3;i*i<=n;i+=2)
	{
		while(n%i==0)
		{
			v.pb(i);
			n=n/i;
		}
	}

	if(n>2)
		v.pb(n);

	if(v.size()<k)
		cout<<0<<endl;
	else
	{


		cout<<1<<endl;


	}
		
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    
    for(ll i=0;i<t;i++)
    {
      ll x,k;
      
      cin>>x>>k;
      if(k>=27)
      	cout<<0<<endl;
      else
      {
      	if(pow(2,k)>x)
      		cout<<0<<endl;

      	else
      	{

      		if(k==1)
      			cout<<1<<endl;
      		else


      		checker(x,k);

      	}
      }	




      		

      	
      
    }
return 0;
}
		
