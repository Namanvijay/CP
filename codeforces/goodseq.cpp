//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define maxn 10000001
vector <ll> v(maxn,0);
void sieve()
{
	
	v[1]=1;
	for(ll i=2;i<maxn;i++)
		v[i]=i;
	for(ll i=4;i<maxn;i+=2)
		v[i]=2;
	for(ll i=3;i<sqrt(maxn);i++)
	{
		if(v[i]==i)
		{
			for(ll j=i*i;j<maxn;j+=i)
			{
				if(v[j]==j)
					v[j]=i;
			}
		}
	}
	//for(ll i=1;i<11;i++)
		//cout<<"!!!"<<v[i]<<endl;


}

vector <ll> factors(ll n)
{
	//cout<<"^^^^"<<endl;
	vector <ll> v1;
	while(n!=1)
	{ 
		v1.pb(v[n]);
		n=n/v[n];
	}
	return v1;
}

int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	sieve();
	vector <ll> leng(arr[n-1]+1,0);

	for(ll i=n-1;i>=0;i--)
	{
		vector <ll> fact=factors(arr[i]);
		//for(ll i=0;i<fact.size();i++)
			//cout<<"(((("<<fact[i]<<" ";
		//cout<<"\n";
		ll x=0;
		for(ll i=0;i<fact.size();i++)
		{
			x=max(x,leng[fact[i]]);
			//leng[fact[i]]=x+1;

		}
		for(ll i=0;i<fact.size();i++)
		{
			leng[fact[i]]=x+1;
		}






	}
	ll ans=1;

	for(ll i=0;i<leng.size();i++)
		ans=max(ans,leng[i]);
	cout<<ans<<endl;
	return 0;

}
