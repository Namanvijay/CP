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
#define ppl vector<pair<ll,ll>> 
#define fi first
#define si second
#define pr pair<ll,ll> 
#define mvec map<ll,vector <ll>>
  
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
    	for(ll j=1;j<=n;j++)
    	{
    		for(ll k=1;k<=n;k++)
    		{
    			ll q=__gcd(j,k);
    			ll p=__gcd(i,q);
    			sum=sum+p;
    		}
    	}
    }
    cout<<sum<<endl;

return 0;
}
