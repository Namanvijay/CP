//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
vector <bool> v(10000000,true);
ll p=10000000;
void fun()
{
   v[0]=false;
   v[1]=false;

   ll z=sqrt(p);
   for(ll i=1;i<=z;i++)
   {
   	if(v[i])
   	
   		for(ll j=i*i;j<=p;j=j+i)
   			v[j]=false;
   	

   }


}
bool square(ll n)
{
	long double s=sqrt(n);
	//cout<<s<<endl;

	if((s-floor(s))==0)
	{
		if(v[s]==true)
			return true;
		else
			return false;
	}
		
	else
		return false;
}
ll m=pow(10,9)+7;
int main()
{
	fun();
	ll n;
	cin>>n;
	vector <ll> v;
	for(ll i=0;i<n;i++)
	{
		ll k;
		cin>>k;
		v.pb(k);
	}

	for(ll i=0;i<n;i++)
	{
		if(v[i]==1)
			cout<<"NO"<<endl;
		else
		{
                  if(square(v[i]))
		
              cout<<"YES"<<endl;
		
		else
			cout<<"NO"<<endl;
	}
		
		
	}
	return 0;
}