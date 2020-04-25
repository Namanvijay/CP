//@@@@@@@@@@ JAI BAJRANG BALI @@@@@@@@@

/************** Code by naman ******/

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
vector <ll> v(maxn,0);
vector <ll> vi(10000000,0);
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
	


} 

ll fun(ll n)
{
	vi[1]=0;
	ll temp=n;
	ll c=0;
	while(temp!=1)
	{
		// ll z=temp/v[temp];
		temp=temp/v[temp];
		c++;
	
	}
    vi[n]=vi[n-1]+c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    
    sieve();
    for(ll i=2;i<=5000000;i++)
    	fun(i);
    // for(ll i=1;i<=12;i++)
    	// cout<<vi[i]<<" ";
    // cout<<endl;
    while(t--)
    {
         ll a,b;
         cin>>a>>b;
         ll ans=0;
         // for(ll i=b+1;i<=a;i++)
         // 	ans=ans+vi[i];
        

         cout<<vi[a]-vi[b]<<endl;

    }
return 0;
}
		
