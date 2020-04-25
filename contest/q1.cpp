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
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vec v(n);
    for(ll i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end());
    if(n%2!=0)
    {
    	ll ans=0;
    	ll med=v[n/2];
    	ll st=med-n/2;
    	for(ll i=0;i<n;i++)
    	{
    		ll pr=st+i;
    		ans=ans+abs(pr-v[i]);
    	}

    	cout<<ans<<endl;
    }

    else
    {

    	ll ans=0;
    	ll med=v[n/2];
    	ll st=med-n/2;
    	for(ll i=0;i<n;i++)
    	{
    		ll pr=st+i;
    		ans=ans+abs(pr-v[i]);
    	}

    	ll ans1=0;
    	med=v[n/2-1];
    	st=med-(n/2-1);
    	for(ll i=0;i<n;i++)
    	{
    		ll pr=st+i;
    		ans1=ans1+abs(pr-v[i]);
    	}

    	ans=min(ans,ans1);

    	cout<<ans<<endl;


    }

return 0;
}
