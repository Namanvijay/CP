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
vector <ll> fun(ll n)
{
	ll j=0;
	vector <ll> v;
	while(n)
	{
		ll c=n&1;
		if(c==0)
		{
			v.pb(j);
			// cout<<"%%%"<<j<<endl;

		}
		n=n>>1;
		j++;
	}
	return v;
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
         vector <ll> v;
         v=fun(n);
         ll ans=0;
         for(ll i=0;i<v.size();i++)
         {
         	ans=ans+(pow(2,v[i]));
         }
         cout<<ans<<endl;
    }
return 0;
}
		
