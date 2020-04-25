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
    deque <ll> d1,d2;
    ll k1;
    cin>>k1;
    for(ll i=0;i<k1;i++)
    {
    	ll a;
    	cin>>a;
    	d1.pb(a);
    }
    ll k2;
    cin>>k2;
    for(ll i=0;i<k2;i++)
    {
    	ll a;
    	cin>>a;
    	d2.pb(a);
    }
    ll ans=0;

    while(1)
    {
    	ll x=d1.front();
    	d1.pop_front();
    	ll y=d2.front();
    	d2.pop_front();
    	if(x>y)
    	{

    		d1.pb(y);
    		d1.pb(x);
    		ans++;
    	}
    	else
    	{
    		d2.pb(x);
    		d2.pb(y);
    		ans++;
    	}
    	if(d1.empty())
    	{
    		cout<<ans<<" "<<2<<endl;
    		break;
    	}
    	else if(d2.empty())
    	{
    		cout<<ans<<" "<<1<<endl;
    		break;
    	}

    	if(ans>=100000)
    	{
    		cout<<"-1"<<endl;
    		break;
    	}

    }

  

return 0;
}
