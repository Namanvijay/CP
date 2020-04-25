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
ll fun(ll part,ll arr[],ll n)
{
	ll count=0;
	for(ll i=0;i<n;i++)
	{
		if ((part & arr[i]) == part) 
			count++;

	}

	return count;
}
void maxand(ll arr[],ll n)
{
	ll res=0,count;
	for(ll bit=31;bit>=0;bit--)
	{
		count=fun(res|(1<<bit),arr,n);
		if (count>=2)
		res=res|(1<<bit);
	}

	vector <ll> v;

	count=0;

	for(ll i=0;i<n && count<2;i++)
	{
		if((arr[i]&res)==res)
		{
			v.pb(arr[i]);
			count++;
		}

	}

	// cout<<v[0]<<" "<<v[1]<<endl;
	// cout<<res<<endl;

	cout<<(v[0]^v[1])<<endl;


} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
          
          ll n;
          cin>>n;
          ll arr[n];
          for(ll i=0;i<n;i++)
          	cin>>arr[i];
          maxand(arr,n);
    }
return 0;
}
		
