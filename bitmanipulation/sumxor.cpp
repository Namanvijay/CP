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
ll fun(ll n)
{
	ll count=0;
	ll ans=0;
	while(n!=0)
	{
		ll c=n&1;
		if(c==0)
		{
			count++;

			// ans=ans+1<<1;
			// cout<<ans<<endl
		}

		n=n>>1;

	}
	// unsigned ll r=1<<31;
	cout<<r<<endl;
	// cout<<"%%%"<<count<<endl;
	// cout<<"^^^^"<<(1<<31)<<endl;
	return pow(2,count);
} 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll count=fun(n);
    cout<<count<<endl;

return 0;
}
